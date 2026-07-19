/* Function at 0x80793E1C, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80793E1C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r6, 0 */ // 0x80793E28
    *(0x14 + r1) = r0; // stw @ 0x80793E2C
    r7 = r3;
    *(0xc + r1) = r31; // stw @ 0x80793E34
    r9 = *(0x88 + r3); // lwz @ 0x80793E38
    /* mtctr r9 */ // 0x80793E3C
    if (<=) goto 0x0x80793e84;
    r8 = *(0x80 + r7); // lwz @ 0x80793E48
    if (==) goto 0x0x80793e5c;
    r0 = *(0x90 + r8); // lwz @ 0x80793E54
    /* b 0x80793e60 */ // 0x80793E58
    /* li r0, -1 */ // 0x80793E5C
    if (!=) goto 0x0x80793e78;
    /* slwi r0, r6, 2 */ // 0x80793E68
    r4 = r3 + r0; // 0x80793E6C
    r31 = r4 + 0x80; // 0x80793E70
    /* b 0x80793e88 */ // 0x80793E74
    r7 = r7 + 4; // 0x80793E78
    r6 = r6 + 1; // 0x80793E7C
    if (counter-- != 0) goto 0x0x80793e48;
    /* li r31, 0 */ // 0x80793E84
    if (!=) goto 0x0x80793ed0;
    r6 = r3;
    /* li r4, 0 */ // 0x80793E94
    /* mtctr r9 */ // 0x80793E98
    if (<=) goto 0x0x80793ecc;
    r0 = *(0x80 + r6); // lwz @ 0x80793EA4
    if (!=) goto 0x0x80793ec0;
    /* slwi r0, r4, 2 */ // 0x80793EB0
    r4 = r3 + r0; // 0x80793EB4
    r31 = r4 + 0x80; // 0x80793EB8
    /* b 0x80793ed0 */ // 0x80793EBC
    r6 = r6 + 4; // 0x80793EC0
    r4 = r4 + 1; // 0x80793EC4
    if (counter-- != 0) goto 0x0x80793ea4;
    /* li r31, 0 */ // 0x80793ECC
    if (==) goto 0x0x80793eec;
    r4 = r31;
    /* li r6, 0 */ // 0x80793EDC
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793ef0 */ // 0x80793EE8
    /* li r3, 0 */ // 0x80793EEC
    r0 = *(0x14 + r1); // lwz @ 0x80793EF0
    r31 = *(0xc + r1); // lwz @ 0x80793EF4
}