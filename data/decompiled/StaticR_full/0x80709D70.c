/* Function at 0x80709D70, size=308 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80709D70(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x80709D78
    *(0xd8 + r1) = r30; // stw @ 0x80709D84
    *(0xd4 + r1) = r29; // stw @ 0x80709D88
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x80709D90
    r3 = *(0 + r3); // lwz @ 0x80709D94
    r30 = *(0x150 + r3); // lwz @ 0x80709D98
    if (!=) goto 0x0x80709dac;
    /* li r30, 0 */ // 0x80709DA4
    /* b 0x80709e00 */ // 0x80709DA8
    /* lis r31, 0 */ // 0x80709DAC
    r31 = r31 + 0; // 0x80709DB0
    if (==) goto 0x0x80709dfc;
    r12 = *(0 + r30); // lwz @ 0x80709DB8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80709DC0
    /* mtctr r12 */ // 0x80709DC4
    /* bctrl  */ // 0x80709DC8
    /* b 0x80709de4 */ // 0x80709DCC
    if (!=) goto 0x0x80709de0;
    /* li r0, 1 */ // 0x80709DD8
    /* b 0x80709df0 */ // 0x80709DDC
    r3 = *(0 + r3); // lwz @ 0x80709DE0
    if (!=) goto 0x0x80709dd0;
    /* li r0, 0 */ // 0x80709DEC
    if (==) goto 0x0x80709dfc;
    /* b 0x80709e00 */ // 0x80709DF8
    /* li r30, 0 */ // 0x80709DFC
    r12 = *(0 + r30); // lwz @ 0x80709E00
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x80709E08
    /* mtctr r12 */ // 0x80709E0C
    /* bctrl  */ // 0x80709E10
    r3 = r30;
    /* li r4, 0x1a2c */ // 0x80709E18
    /* li r5, 0 */ // 0x80709E1C
    FUN_8064D8B4(r3, r4, r5); // bl 0x8064D8B4
    FUN_80654ECC(r3, r4, r5, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x80709E2C
    r3 = *(0 + r3); // lwz @ 0x80709E30
    FUN_806F5A3C(r3, r3); // bl 0x806F5A3C
    r0 = *(0x58 + r29); // lwz @ 0x80709E38
    /* li r4, 0x1a2f */ // 0x80709E40
    /* mulli r0, r0, 0x28 */ // 0x80709E44
    r6 = r3 + r0; // 0x80709E48
    r3 = r30;
    r0 = r6 + 0x18; // 0x80709E50
    *(0xa4 + r1) = r0; // stw @ 0x80709E54
    FUN_8064D8BC(r3); // bl 0x8064D8BC
    /* li r0, 1 */ // 0x80709E5C
    *(0x54 + r29) = r0; // stw @ 0x80709E60
    r3 = r29;
    /* li r4, 0x52 */ // 0x80709E68
    r12 = *(0 + r29); // lwz @ 0x80709E6C
    /* li r5, 0 */ // 0x80709E70
    r12 = *(0x24 + r12); // lwz @ 0x80709E74
    /* mtctr r12 */ // 0x80709E78
    /* bctrl  */ // 0x80709E7C
    /* li r0, -1 */ // 0x80709E80
    *(0x5c + r29) = r0; // stw @ 0x80709E84
    r31 = *(0xdc + r1); // lwz @ 0x80709E88
    r30 = *(0xd8 + r1); // lwz @ 0x80709E8C
    r29 = *(0xd4 + r1); // lwz @ 0x80709E90
    r0 = *(0xe4 + r1); // lwz @ 0x80709E94
    return;
}