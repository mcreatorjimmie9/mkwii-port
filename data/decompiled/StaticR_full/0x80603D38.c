/* Function at 0x80603D38, size=280 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80603D38(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80603D44
    r31 = r3;
    /* lfs f1, 0x28(r3) */ // 0x80603D4C
    /* lfs f0, 0x2c(r3) */ // 0x80603D50
    r4 = *(0x20 + r3); // lwz @ 0x80603D54
    /* fmuls f0, f1, f0 */ // 0x80603D58
    /* stfs f0, 0x28(r3) */ // 0x80603D5C
    /* lfs f1, 4(r4) */ // 0x80603D60
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80603D64
    if (<=) goto 0x0x80603d70;
    /* stfs f1, 0x28(r3) */ // 0x80603D6C
    /* lfs f1, 0x2c(r3) */ // 0x80603D70
    /* lfs f0, 0x30(r3) */ // 0x80603D74
    r4 = *(0x20 + r3); // lwz @ 0x80603D78
    /* fsubs f0, f1, f0 */ // 0x80603D7C
    /* stfs f0, 0x2c(r3) */ // 0x80603D80
    /* lfs f1, 8(r4) */ // 0x80603D84
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80603D88
    if (<=) goto 0x0x80603d94;
    /* stfs f1, 0x2c(r3) */ // 0x80603D90
    /* lfs f1, 0x24(r3) */ // 0x80603D94
    /* lfs f0, 0x28(r3) */ // 0x80603D98
    /* lfs f2, 0x34(r3) */ // 0x80603D9C
    /* fadds f0, f1, f0 */ // 0x80603DA0
    /* stfs f0, 0x24(r3) */ // 0x80603DA4
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80603DA8
    if (>=) goto 0x0x80603db4;
    /* stfs f2, 0x24(r3) */ // 0x80603DB0
    r0 = *(0x10 + r3); // lwz @ 0x80603DB4
    if (!=) goto 0x0x80603df4;
    /* lis r4, 0 */ // 0x80603DC0
    /* lis r5, 0 */ // 0x80603DC4
    /* lfs f2, 0(r4) */ // 0x80603DC8
    /* lfs f0, 0x24(r3) */ // 0x80603DCC
    /* lfs f1, 0(r5) */ // 0x80603DD0
    /* fmuls f3, f2, f0 */ // 0x80603DD4
    /* lfs f0, 0x1c(r3) */ // 0x80603DD8
    /* fmr f2, f1 */ // 0x80603DDC
    r3 = r3 + 0x3c; // 0x80603DE0
    /* fneg f3, f3 */ // 0x80603DE4
    /* fmuls f3, f3, f0 */ // 0x80603DE8
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x80603e30 */ // 0x80603DF0
    if (==) goto 0x0x80603e04;
    if (!=) goto 0x0x80603e30;
    /* lis r4, 0 */ // 0x80603E04
    /* lis r5, 0 */ // 0x80603E08
    /* lfs f3, 0(r4) */ // 0x80603E0C
    /* lfs f2, 0x24(r3) */ // 0x80603E10
    /* lfs f0, 0x1c(r3) */ // 0x80603E14
    r3 = r3 + 0x3c; // 0x80603E18
    /* fmuls f2, f3, f2 */ // 0x80603E1C
    /* lfs f1, 0(r5) */ // 0x80603E20
    /* fmr f3, f1 */ // 0x80603E24
    /* fmuls f2, f2, f0 */ // 0x80603E28
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r31;
    FUN_8061DC28(r3); // bl 0x8061DC28
    r4 = r31 + 0x3c; // 0x80603E38
    FUN_80629FC4(r3, r4); // bl 0x80629FC4
    r0 = *(0x14 + r1); // lwz @ 0x80603E40
    r31 = *(0xc + r1); // lwz @ 0x80603E44
}