----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:14:58 03/24/2020 
-- Design Name: 
-- Module Name:    PLC - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity PLC is
    Port (  CLK : in  STD_LOGIC;
				SW : in STD_LOGIC_VECTOR (7 downto 0);
				LED : out STD_LOGIC_VECTOR (7 downto 0) := X"00"
				);
	 
end PLC;

architecture Behavioral of PLC is

	type ram_type is array (0 to 63) of STD_LOGIC_VECTOR (7 downto 0);
	signal PROG : ram_type := (X"01", X"01", X"01", X"03", X"02", X"01", X"02", X"03",
										X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
										X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
										X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
										X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
										X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
										X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
										X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00");

	signal PC : STD_LOGIC_VECTOR (5 downto 0) := "000000";
	
	type reg_type is array (7 downto 0) of STD_LOGIC_VECTOR (7 downto 0);
	signal REG : reg_type := ( X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00");


begin
	
	process(CLK) 
		variable cmd : STD_LOGIC_VECTOR (7 downto 0) := X"00";
	begin	
		if rising_edge(CLK) then
			
			cmd := PROG(conv_integer(PC));
				
			case(cmd) is
				when X"00" => -- [NOP], laver ingenting
					PC <= PC + 1;
				when X"01" => -- [HI], set led high
					LED(conv_integer(PROG(conv_integer(PC + 1)))) <= '1';
					PC <= PC + 2;
				when X"02" => -- [LO], set led low
					LED(conv_integer(PROG(conv_integer(PC + 1)))) <= '0';
					PC <= PC + 2;
				when X"03" =>  -- [CON], connect sw to led
               LED(conv_integer(PROG(conv_integer(PC) + 2))) <= SW(conv_integer(PROG(conv_integer(PC) + 1)));
               PC <= PC + 3; 
				when X"04" => -- [JMP], jump to adress 
					PC <= PROG(conv_integer(PC + 1))(5 downto 0);
				when others =>
					PC <= PC + 1; -- ogsaa nop, laver heller ingen ting
			end case;
			
		end if;
	end process;
	
	
	
end Behavioral;

