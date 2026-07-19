/* Function at 0x806202AC, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806202AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x806202C0
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806202C8
    r29 = r3;
    r0 = *(0x12 + r4); // lbz @ 0x806202D0
    if (==) goto 0x0x806203b4;
    /* li r3, 0x4c */ // 0x806202DC
    FUN_805E3430(r3); // bl 0x805E3430
    r4 = r3;
    if (==) goto 0x0x80620308;
    /* lis r5, 0 */ // 0x806202F0
    /* li r4, 0xa */ // 0x806202F4
    r5 = *(0 + r5); // lwz @ 0x806202F8
    /* li r6, 0x2220 */ // 0x806202FC
}