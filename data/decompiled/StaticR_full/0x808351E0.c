/* Function at 0x808351E0, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808351E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x808351F8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80835200
    r28 = r3;
    if (==) goto 0x0x80835254;
    if (==) goto 0x0x80835244;
    /* addic. r30, r3, 0x1ec */ // 0x80835210
    if (==) goto 0x0x80835244;
    /* lis r31, 0 */ // 0x80835218
    r3 = r30 + 0x30; // 0x8083521C
    r4 = r31 + 0; // 0x80835220
    /* li r5, 0xc */ // 0x80835224
    /* li r6, 4 */ // 0x80835228
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    r4 = r31 + 0; // 0x80835234
    /* li r5, 0xc */ // 0x80835238
    /* li r6, 4 */ // 0x8083523C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x80835254;
    r3 = r28;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80835254
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x8083525C
    r29 = *(0x14 + r1); // lwz @ 0x80835260
}