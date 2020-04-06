/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/japem/Documents/VHDL/enkeltPLC/PLC.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2164437731_3212880686_p_0(char *t0)
{
    char t18[16];
    char t28[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t3 = (t0 + 1672U);
    t5 = *((char **)t3);
    t3 = (t0 + 5632U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t3);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t11 = (t4 + t10);
    t12 = (t0 + 1968U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    memcpy(t12, t11, 8U);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t1 = (t0 + 6215);
    t6 = xsi_mem_cmp(t1, t3, 8U);
    if (t6 == 1)
        goto LAB6;

LAB11:    t5 = (t0 + 6223);
    t7 = xsi_mem_cmp(t5, t3, 8U);
    if (t7 == 1)
        goto LAB7;

LAB12:    t12 = (t0 + 6231);
    t14 = xsi_mem_cmp(t12, t3, 8U);
    if (t14 == 1)
        goto LAB8;

LAB13:    t15 = (t0 + 6239);
    t17 = xsi_mem_cmp(t15, t3, 8U);
    if (t17 == 1)
        goto LAB9;

LAB14:
LAB10:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5632U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t3, t1, 1);
    t5 = (t18 + 12U);
    t8 = *((unsigned int *)t5);
    t9 = (1U * t8);
    t2 = (6U != t9);
    if (t2 == 1)
        goto LAB24;

LAB25:    t11 = (t0 + 3352);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 6U);
    xsi_driver_first_trans_fast(t11);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(67, ng0);
    t19 = (t0 + 1672U);
    t20 = *((char **)t19);
    t19 = (t0 + 5632U);
    t21 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t20, t19, 1);
    t22 = (t18 + 12U);
    t8 = *((unsigned int *)t22);
    t9 = (1U * t8);
    t2 = (6U != t9);
    if (t2 == 1)
        goto LAB16;

LAB17:    t23 = (t0 + 3352);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t21, 6U);
    xsi_driver_first_trans_fast(t23);
    goto LAB5;

LAB7:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 5632U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t4, t1, 1);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t18);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t11 = (t3 + t10);
    t12 = (t28 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 7);
    t29 = (t14 * -1);
    t29 = (t29 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t29;
    t17 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t28);
    t30 = (t17 - 7);
    t29 = (t30 * -1);
    t31 = (1 * t29);
    t32 = (0U + t31);
    t13 = (t0 + 3416);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_delta(t13, t32, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5632U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t3, t1, 2);
    t5 = (t18 + 12U);
    t8 = *((unsigned int *)t5);
    t9 = (1U * t8);
    t2 = (6U != t9);
    if (t2 == 1)
        goto LAB18;

LAB19:    t11 = (t0 + 3352);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 6U);
    xsi_driver_first_trans_fast(t11);
    goto LAB5;

LAB8:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 5632U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t4, t1, 1);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t18);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t11 = (t3 + t10);
    t12 = (t28 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 7);
    t29 = (t14 * -1);
    t29 = (t29 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t29;
    t17 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t28);
    t30 = (t17 - 7);
    t29 = (t30 * -1);
    t31 = (1 * t29);
    t32 = (0U + t31);
    t13 = (t0 + 3416);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t13, t32, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5632U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t3, t1, 2);
    t5 = (t18 + 12U);
    t8 = *((unsigned int *)t5);
    t9 = (1U * t8);
    t2 = (6U != t9);
    if (t2 == 1)
        goto LAB20;

LAB21:    t11 = (t0 + 3352);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 6U);
    xsi_driver_first_trans_fast(t11);
    goto LAB5;

LAB9:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 5632U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t7 = (t6 + 1);
    t14 = (t7 - 0);
    t8 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t7);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t11 = (t4 + t10);
    t12 = (t18 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t17 = (0 - 7);
    t29 = (t17 * -1);
    t29 = (t29 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t29;
    t30 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t18);
    t33 = (t30 - 7);
    t29 = (t33 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t30);
    t31 = (1U * t29);
    t32 = (0 + t31);
    t13 = (t3 + t32);
    t2 = *((unsigned char *)t13);
    t15 = (t0 + 1512U);
    t16 = *((char **)t15);
    t15 = (t0 + 1672U);
    t19 = *((char **)t15);
    t15 = (t0 + 5632U);
    t34 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t19, t15);
    t35 = (t34 + 2);
    t36 = (t35 - 0);
    t37 = (t36 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t35);
    t38 = (8U * t37);
    t39 = (0 + t38);
    t20 = (t16 + t39);
    t21 = (t28 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 7;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t40 = (0 - 7);
    t41 = (t40 * -1);
    t41 = (t41 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t41;
    t42 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t28);
    t43 = (t42 - 7);
    t41 = (t43 * -1);
    t44 = (1 * t41);
    t45 = (0U + t44);
    t22 = (t0 + 3416);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t2;
    xsi_driver_first_trans_delta(t22, t45, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5632U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t3, t1, 3);
    t5 = (t18 + 12U);
    t8 = *((unsigned int *)t5);
    t9 = (1U * t8);
    t2 = (6U != t9);
    if (t2 == 1)
        goto LAB22;

LAB23:    t11 = (t0 + 3352);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 6U);
    xsi_driver_first_trans_fast(t11);
    goto LAB5;

LAB15:;
LAB16:    xsi_size_not_matching(6U, t9, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(6U, t9, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(6U, t9, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(6U, t9, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(6U, t9, 0);
    goto LAB25;

}


extern void work_a_2164437731_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2164437731_3212880686_p_0};
	xsi_register_didat("work_a_2164437731_3212880686", "isim/TestBench_isim_beh.exe.sim/work/a_2164437731_3212880686.didat");
	xsi_register_executes(pe);
}
