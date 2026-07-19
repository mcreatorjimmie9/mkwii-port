/* Function at 0x806536FC, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806536FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 4 */ // 0x80653704
    *(0xc + r1) = r31; // stw @ 0x8065370C
    *(8 + r1) = r30; // stw @ 0x80653710
    r30 = r3;
    FUN_80671C1C(r4); // bl 0x80671C1C
    /* li r31, 0 */ // 0x8065371C
    /* subfic r0, r31, 3 */ // 0x80653720
    r3 = r30;
    /* mulli r0, r0, 0x1dc */ // 0x80653728
    r4 = r31;
    /* li r6, 0 */ // 0x80653730
    r5 = r30 + r0; // 0x80653734
    r5 = r5 + 0x44; // 0x80653738
    FUN_80671C2C(r4, r6, r5); // bl 0x80671C2C
    r31 = r31 + 1; // 0x80653740
    if (<) goto 0x0x80653720;
    r31 = r30 + 0x44; // 0x8065374C
    /* li r30, 0 */ // 0x80653750
    r3 = r31;
    r4 = r30;
    FUN_80652B50(r3, r4); // bl 0x80652B50
    r30 = r30 + 1; // 0x80653760
    r31 = r31 + 0x1dc; // 0x80653764
    if (<) goto 0x0x80653754;
    r0 = *(0x14 + r1); // lwz @ 0x80653770
    r31 = *(0xc + r1); // lwz @ 0x80653774
    r30 = *(8 + r1); // lwz @ 0x80653778
    return;
}