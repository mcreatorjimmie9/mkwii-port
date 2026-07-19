/* Function at 0x806D4D5C, size=168 bytes */
/* Stack frame: 1392 bytes */
/* Saved registers: r21 */
/* Calls: 5 function(s) */

int FUN_806D4D5C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -1392(r1) */
    /* saved r21 */
    /* li r0, 0 */ // 0x806D4D68
    /* stmw r21, 0x544(r1) */ // 0x806D4D6C
    r24 = r4;
    /* lis r21, 0 */ // 0x806D4D74
    r23 = r3;
    *(0x14 + r1) = r0; // stb @ 0x806D4D80
    r3 = *(0 + r21); // lwz @ 0x806D4D84
    *(0x18 + r1) = r0; // stw @ 0x806D4D88
    FUN_806F9214(r4); // bl 0x806F9214
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x1c + r1); // lwz @ 0x806D4D98
    /* li r3, 0x19ca */ // 0x806D4D9C
    *(0x54 + r1) = r3; // stw @ 0x806D4DA0
    if (!=) goto 0x0x806d4db8;
    r0 = *(0x24 + r1); // lwz @ 0x806D4DAC
    *(0xcc + r1) = r0; // stw @ 0x806D4DB0
    /* b 0x806d4dc8 */ // 0x806D4DB4
    r3 = *(0 + r21); // lwz @ 0x806D4DB8
    r4 = r24;
    FUN_806F8CCC(r4); // bl 0x806F8CCC
    *(0xcc + r1) = r3; // stw @ 0x806D4DC4
    r3 = r23 + 0x4f4; // 0x806D4DC8
    /* li r4, 0x1775 */ // 0x806D4DD0
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r30, 0 */ // 0x806D4DD8
    /* lis r4, 0 */ // 0x806D4DDC
    /* lis r5, 0 */ // 0x806D4DE0
    *(0x16b4 + r23) = r30; // stw @ 0x806D4DE4
    r4 = r4 + 0; // 0x806D4DEC
    r5 = r5 + 0; // 0x806D4DF0
    /* li r26, 0 */ // 0x806D4DF4
    /* li r6, 0x20 */ // 0x806D4DF8
    /* li r7, 0x22 */ // 0x806D4DFC
    FUN_805E3430(r4, r5, r6, r7); // bl 0x805E3430
}