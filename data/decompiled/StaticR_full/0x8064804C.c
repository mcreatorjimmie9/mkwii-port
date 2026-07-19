/* Function at 0x8064804C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8064804C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80648060
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80648068
    r29 = r3;
    if (==) goto 0x0x806480d0;
    if (==) goto 0x0x806480c0;
    /* lis r5, 0 */ // 0x80648078
    /* lis r4, 0 */ // 0x8064807C
    r5 = r5 + 0; // 0x80648080
    *(0 + r3) = r5; // stw @ 0x80648084
    r31 = *(0 + r4); // lwz @ 0x80648088
    if (==) goto 0x0x806480b4;
    /* li r0, 0 */ // 0x80648094
    *(0 + r4) = r0; // stw @ 0x80648098
    if (==) goto 0x0x806480b4;
    r3 = r31;
    /* li r4, -1 */ // 0x806480A4
    FUN_80647DCC(r3, r4); // bl 0x80647DCC
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x806480B8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x806480d0;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x806480D0
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x806480D8
    r29 = *(0x14 + r1); // lwz @ 0x806480DC
    r0 = *(0x24 + r1); // lwz @ 0x806480E0
    return;
}