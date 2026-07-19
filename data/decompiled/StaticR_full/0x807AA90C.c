/* Function at 0x807AA90C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807AA90C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807AA920
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807AA928
    r29 = r3;
    if (==) goto 0x0x807aa990;
    if (==) goto 0x0x807aa980;
    /* lis r5, 0 */ // 0x807AA938
    /* lis r4, 0 */ // 0x807AA93C
    r5 = r5 + 0; // 0x807AA940
    *(0 + r3) = r5; // stw @ 0x807AA944
    r31 = *(0 + r4); // lwz @ 0x807AA948
    if (==) goto 0x0x807aa974;
    /* li r0, 0 */ // 0x807AA954
    *(0 + r4) = r0; // stw @ 0x807AA958
    if (==) goto 0x0x807aa974;
    r3 = r31;
    /* li r4, -1 */ // 0x807AA964
    FUN_807AA638(r3, r4); // bl 0x807AA638
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807AA978
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807aa990;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807AA990
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807AA998
    r29 = *(0x14 + r1); // lwz @ 0x807AA99C
    r0 = *(0x24 + r1); // lwz @ 0x807AA9A0
    return;
}