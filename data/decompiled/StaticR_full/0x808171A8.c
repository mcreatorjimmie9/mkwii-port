/* Function at 0x808171A8, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808171A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808171B0
    *(0xc + r1) = r31; // stw @ 0x808171B8
    *(8 + r1) = r30; // stw @ 0x808171BC
    r31 = *(0 + r4); // lwz @ 0x808171C0
    if (==) goto 0x0x80817244;
    /* li r0, 0 */ // 0x808171CC
    *(0 + r4) = r0; // stw @ 0x808171D0
    if (==) goto 0x0x80817244;
    if (==) goto 0x0x8081723c;
    /* lis r3, 0 */ // 0x808171DC
    r3 = r3 + 0; // 0x808171E0
    *(0 + r31) = r3; // stw @ 0x808171E4
    r30 = *(0 + r4); // lwz @ 0x808171E8
    if (==) goto 0x0x80817230;
    *(0 + r4) = r0; // stw @ 0x808171F4
    if (==) goto 0x0x80817230;
    if (==) goto 0x0x80817228;
    *(0 + r30) = r3; // stw @ 0x80817200
    r3 = *(0 + r4); // lwz @ 0x80817204
    if (==) goto 0x0x8081721c;
    *(0 + r4) = r0; // stw @ 0x80817210
    /* li r4, 1 */ // 0x80817214
    FUN_80817340(r4); // bl 0x80817340
    r3 = r30;
    /* li r4, 0 */ // 0x80817220
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80817234
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x80817244
    r31 = *(0xc + r1); // lwz @ 0x80817248
    r30 = *(8 + r1); // lwz @ 0x8081724C
    return;
}