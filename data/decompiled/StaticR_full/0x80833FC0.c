/* Function at 0x80833FC0, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80833FC0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80833FCC
    r31 = r3;
    r0 = *(0x2bc + r3); // lwz @ 0x80833FD4
    if (<=) goto 0x0x80834020;
    /* li r5, 1 */ // 0x80833FE0
    FUN_808391EC(r5); // bl 0x808391EC
    if (==) goto 0x0x80834064;
    r0 = *(0x7c + r31); // lwz @ 0x80833FF0
    /* li r3, 4 */ // 0x80833FF4
    *(0x2b8 + r31) = r3; // stw @ 0x80833FF8
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80833FFC
    if (==) goto 0x0x80834064;
    r4 = *(0x280 + r31); // lwz @ 0x80834004
    /* li r3, 1 */ // 0x80834008
    r0 = *(0xc + r31); // lha @ 0x8083400C
    r4 = *(0x18 + r4); // lbz @ 0x80834010
    /* clrlwi r5, r0, 0x10 */ // 0x80834014
    FUN_808275E8(r3); // bl 0x808275E8
    /* b 0x80834064 */ // 0x8083401C
    if (<=) goto 0x0x80834064;
    /* li r5, 0 */ // 0x80834028
    FUN_808391EC(r5); // bl 0x808391EC
    if (==) goto 0x0x80834064;
    r0 = *(0x7c + r31); // lwz @ 0x80834038
    /* li r3, 4 */ // 0x8083403C
    *(0x2b8 + r31) = r3; // stw @ 0x80834040
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80834044
    if (==) goto 0x0x80834064;
    r4 = *(0x280 + r31); // lwz @ 0x8083404C
    /* li r3, 1 */ // 0x80834050
    r0 = *(0xc + r31); // lha @ 0x80834054
    r4 = *(0x18 + r4); // lbz @ 0x80834058
    /* clrlwi r5, r0, 0x10 */ // 0x8083405C
    FUN_808275E8(r3); // bl 0x808275E8
    r0 = *(0x14 + r1); // lwz @ 0x80834064
    r31 = *(0xc + r1); // lwz @ 0x80834068
    return;
}