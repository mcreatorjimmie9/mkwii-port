/* Function at 0x808F7158, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808F7158(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x808F7170
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808F7178
    r28 = r3;
    if (==) goto 0x0x808f72b0;
    /* lis r5, 0 */ // 0x808F7184
    /* lis r4, 0 */ // 0x808F7188
    r5 = r5 + 0; // 0x808F718C
    *(0 + r3) = r5; // stw @ 0x808F7190
    r30 = *(0 + r4); // lwz @ 0x808F7194
    if (==) goto 0x0x808f7294;
    /* li r0, 0 */ // 0x808F71A0
    *(0 + r4) = r0; // stw @ 0x808F71A4
    if (==) goto 0x0x808f7294;
    /* lis r4, 0 */ // 0x808F71AC
    r3 = r30 + 0x42a8; // 0x808F71B0
    r4 = r4 + 0; // 0x808F71B4
    /* li r5, 0x30 */ // 0x808F71B8
    /* li r6, 0x18 */ // 0x808F71BC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r31, 0 */ // 0x808F71C4
    r3 = r30 + 0x4140; // 0x808F71C8
    r4 = r31 + 0; // 0x808F71CC
    /* li r5, 0x30 */ // 0x808F71D0
    /* li r6, 6 */ // 0x808F71D4
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x4020; // 0x808F71DC
    r4 = r31 + 0; // 0x808F71E0
    /* li r5, 0x30 */ // 0x808F71E4
    /* li r6, 6 */ // 0x808F71E8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r30, 0x3f48 */ // 0x808F71F0
}