/* Function at 0x808C000C, size=336 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808C000C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x808C0014
    /* li r0, 0 */ // 0x808C001C
    *(0x1c + r1) = r31; // stw @ 0x808C0020
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808C0028
    *(0x14 + r1) = r29; // stw @ 0x808C002C
    *(0xd98 + r3) = r0; // stw @ 0x808C0030
    *(0xd9c + r3) = r6; // stw @ 0x808C0034
    FUN_808C015C(); // bl 0x808C015C
    r0 = *(0xd9c + r31); // lwz @ 0x808C003C
    if (==) goto 0x0x808c005c;
    if (==) goto 0x0x808c006c;
    if (==) goto 0x0x808c0074;
    /* b 0x808c0084 */ // 0x808C0058
    /* lis r3, 0 */ // 0x808C005C
    r3 = *(0 + r3); // lwz @ 0x808C0060
    r0 = *(0x2d4 + r3); // lbz @ 0x808C0064
    /* b 0x808c0088 */ // 0x808C0068
    /* li r0, 6 */ // 0x808C006C
    /* b 0x808c0088 */ // 0x808C0070
    /* lis r3, 0 */ // 0x808C0074
    r3 = *(0 + r3); // lwz @ 0x808C0078
    r0 = *(0x2e8 + r3); // lbz @ 0x808C007C
    /* b 0x808c0088 */ // 0x808C0080
    /* li r0, 0 */ // 0x808C0084
    if (==) goto 0x0x808c00c4;
    /* li r29, 0 */ // 0x808C0090
    /* li r30, 1 */ // 0x808C0094
    r3 = *(0x6bc + r31); // lwz @ 0x808C0098
    r0 = r30 << r29; // slw
    /* and. r0, r3, r0 */ // 0x808C00A0
    if (==) goto 0x0x808c00b8;
    r3 = *(0x48 + r31); // lwz @ 0x808C00A8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808C00B0
    FUN_80649F40(r4); // bl 0x80649F40
    r29 = r29 + 1; // 0x808C00B8
    if (<) goto 0x0x808c0098;
    r0 = *(0xd9c + r31); // lwz @ 0x808C00C4
    if (==) goto 0x0x808c00e4;
    if (==) goto 0x0x808c00f4;
    if (==) goto 0x0x808c00fc;
    /* b 0x808c010c */ // 0x808C00E0
    /* lis r3, 0 */ // 0x808C00E4
    r3 = *(0 + r3); // lwz @ 0x808C00E8
    r6 = *(0x2d4 + r3); // lbz @ 0x808C00EC
    /* b 0x808c0110 */ // 0x808C00F0
    /* li r6, 6 */ // 0x808C00F4
    /* b 0x808c0110 */ // 0x808C00F8
    /* lis r3, 0 */ // 0x808C00FC
    r3 = *(0 + r3); // lwz @ 0x808C0100
    r6 = *(0x2e8 + r3); // lbz @ 0x808C0104
    /* b 0x808c0110 */ // 0x808C0108
    /* li r6, 0 */ // 0x808C010C
    r7 = *(0xd98 + r31); // lwz @ 0x808C0110
    r3 = r31 + 0x6c4; // 0x808C0114
    r0 = r7 + 0xa; // 0x808C0118
    /* neg r5, r7 */ // 0x808C011C
    r0 = r6 ^ r0; // 0x808C0120
    r4 = r0 >> 1; // srawi
    /* andc r5, r5, r7 */ // 0x808C0128
    r0 = r0 & r6; // 0x808C012C
    /* subf r0, r0, r4 */ // 0x808C0130
    /* srwi r4, r5, 0x1f */ // 0x808C0134
    /* srwi r5, r0, 0x1f */ // 0x808C0138
    FUN_8069946C(); // bl 0x8069946C
    r0 = *(0x24 + r1); // lwz @ 0x808C0140
    r31 = *(0x1c + r1); // lwz @ 0x808C0144
    r30 = *(0x18 + r1); // lwz @ 0x808C0148
    r29 = *(0x14 + r1); // lwz @ 0x808C014C
    return;
}