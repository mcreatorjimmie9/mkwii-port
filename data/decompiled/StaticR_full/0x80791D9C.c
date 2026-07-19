/* Function at 0x80791D9C, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80791D9C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80791DB4
    r29 = r3;
    r0 = *(0xa9 + r3); // lbz @ 0x80791DBC
    if (==) goto 0x0x80791ddc;
    r0 = r4 + -0x103; // 0x80791DC8
    if (<=) goto 0x0x80791ddc;
    /* li r3, 0 */ // 0x80791DD4
    /* b 0x80791f0c */ // 0x80791DD8
    r3 = r3 + 0x8c; // 0x80791DDC
    FUN_8078FFE0(r3, r3); // bl 0x8078FFE0
    if (==) goto 0x0x80791df4;
    /* li r31, 0 */ // 0x80791DEC
    /* b 0x80791f08 */ // 0x80791DF0
    r3 = *(0x80 + r29); // lwz @ 0x80791DF4
    /* li r31, 0 */ // 0x80791DF8
    if (==) goto 0x0x80791e24;
    if (==) goto 0x0x80791e10;
    r0 = *(0x90 + r3); // lwz @ 0x80791E08
    /* b 0x80791e14 */ // 0x80791E0C
    /* li r0, -1 */ // 0x80791E10
    if (!=) goto 0x0x80791e24;
    r31 = r29 + 0x80; // 0x80791E1C
    /* b 0x80791e4c */ // 0x80791E20
    r3 = *(0x84 + r29); // lwz @ 0x80791E24
    if (==) goto 0x0x80791e4c;
    if (==) goto 0x0x80791e3c;
    r0 = *(0x90 + r3); // lwz @ 0x80791E34
    /* b 0x80791e40 */ // 0x80791E38
    /* li r0, -1 */ // 0x80791E3C
    if (!=) goto 0x0x80791e4c;
    r31 = r29 + 0x84; // 0x80791E48
    if (!=) goto 0x0x80791ee4;
    r3 = *(0x80 + r29); // lwz @ 0x80791E54
    if (!=) goto 0x0x80791e68;
    r31 = r29 + 0x80; // 0x80791E60
    /* b 0x80791ee4 */ // 0x80791E64
    if (==) goto 0x0x80791e74;
    r0 = *(0x90 + r3); // lwz @ 0x80791E6C
    /* b 0x80791e78 */ // 0x80791E70
    /* li r0, -1 */ // 0x80791E74
    *(8 + r1) = r0; // stw @ 0x80791E78
    r3 = *(0x84 + r29); // lwz @ 0x80791E7C
    if (!=) goto 0x0x80791e90;
    r31 = r29 + 0x84; // 0x80791E88
    /* b 0x80791ee4 */ // 0x80791E8C
    if (==) goto 0x0x80791e9c;
    r0 = *(0x90 + r3); // lwz @ 0x80791E94
    /* b 0x80791ea0 */ // 0x80791E98
    /* li r0, -1 */ // 0x80791E9C
    *(0xc + r1) = r0; // stw @ 0x80791EA0
    r4 = r30;
    r3 = r29 + 0x8c; // 0x80791EA8
    /* li r6, 2 */ // 0x80791EB0
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x80791ec8;
    /* li r31, 0 */ // 0x80791EC0
    /* b 0x80791ee4 */ // 0x80791EC4
    /* slwi r0, r3, 2 */ // 0x80791EC8
    r31 = r29 + r0; // 0x80791ECC
    r3 = *(0x80 + r31); // lwzu @ 0x80791ED0
    if (==) goto 0x0x80791ee4;
    /* li r4, 0 */ // 0x80791EDC
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x80791f04;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80791EF8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x80791f08 */ // 0x80791F00
    /* li r31, 0 */ // 0x80791F04
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80791F0C
    r31 = *(0x1c + r1); // lwz @ 0x80791F10
    r30 = *(0x18 + r1); // lwz @ 0x80791F14
    r29 = *(0x14 + r1); // lwz @ 0x80791F18
}