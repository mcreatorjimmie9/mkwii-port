/* Function at 0x805ACD0C, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805ACD0C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805ACD20
    *(0x14 + r1) = r29; // stw @ 0x805ACD24
    r29 = r4;
    r0 = *(0xc + r3); // lhz @ 0x805ACD2C
    r0 = r0 rlwinm 0x15; // rlwinm
    if (!=) goto 0x0x805acd4c;
    /* li r0, 0 */ // 0x805ACD3C
    *(0 + r4) = r0; // stw @ 0x805ACD40
    /* li r3, 0 */ // 0x805ACD44
    /* b 0x805acdc4 */ // 0x805ACD48
    r3 = r29;
    /* li r4, 0 */ // 0x805ACD50
    /* li r5, 0x2800 */ // 0x805ACD54
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
    r3 = r29;
    r4 = r31;
    /* li r5, 0x88 */ // 0x805ACD64
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r0 = *(0xc + r29); // lhz @ 0x805ACD6C
    r30 = r29 + 0x8c; // 0x805ACD70
    r4 = r30;
}