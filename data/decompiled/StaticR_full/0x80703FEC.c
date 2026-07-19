/* Function at 0x80703FEC, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80703FEC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r5;
    *(0x14 + r1) = r0; // stw @ 0x80703FFC
    r0 = r4;
    *(0xc + r1) = r31; // stw @ 0x80704004
    r31 = r3;
    *(0x18 + r3) = r7; // stw @ 0x8070400C
    /* li r3, 0x697 */ // 0x80704010
    if (!=) goto 0x0x80704020;
    /* li r4, 0 */ // 0x80704018
    /* b 0x80704024 */ // 0x8070401C
    r4 = *(0xc + r31); // lbz @ 0x80704020
    /* lis r7, 0 */ // 0x80704024
    r5 = r0;
    r8 = r31;
    r7 = r7 + 0; // 0x80704030
    FUN_8070651C(r7, r5, r8, r7); // bl 0x8070651C
    r5 = r3;
    if (==) goto 0x0x80704058;
    r3 = r31;
    /* li r4, 1 */ // 0x80704048
    FUN_80704D38(r5, r3, r4); // bl 0x80704D38
    /* li r3, 0 */ // 0x80704050
    /* b 0x80704080 */ // 0x80704054
    /* li r4, 1 */ // 0x80704058
    /* li r3, 2 */ // 0x8070405C
    /* li r0, 0 */ // 0x80704060
    *(0x10 + r31) = r4; // stw @ 0x80704064
    *(0 + r31) = r3; // stw @ 0x80704068
    *(4 + r31) = r0; // stw @ 0x8070406C
    FUN_805E3430(r3); // bl 0x805E3430
    *(0xa0 + r31) = r3; // stw @ 0x80704074
    /* li r3, 1 */ // 0x80704078
    *(0xa4 + r31) = r4; // stw @ 0x8070407C
    r0 = *(0x14 + r1); // lwz @ 0x80704080
    r31 = *(0xc + r1); // lwz @ 0x80704084
}