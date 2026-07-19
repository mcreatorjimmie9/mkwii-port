/* Function at 0x808B115C, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B115C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808B1170
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808B1178
    r29 = r3;
    if (==) goto 0x0x808b11d4;
    /* lis r31, 0 */ // 0x808B1184
    /* li r5, 0xc */ // 0x808B1188
    r4 = r31 + 0; // 0x808B118C
    /* li r6, 4 */ // 0x808B1190
    r3 = r3 + 0x70; // 0x808B1194
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
    r3 = r29 + 0x40; // 0x808B119C
    r4 = r31 + 0; // 0x808B11A0
    /* li r5, 0xc */ // 0x808B11A4
    /* li r6, 4 */ // 0x808B11A8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x10; // 0x808B11B0
    r4 = r31 + 0; // 0x808B11B4
    /* li r5, 0xc */ // 0x808B11B8
}