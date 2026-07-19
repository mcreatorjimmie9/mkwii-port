/* Function at 0x806FAC98, size=80 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806FAC98(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -288(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x806FACA0
    /* lis r4, 0 */ // 0x806FACA4
    *(0x124 + r1) = r0; // stw @ 0x806FACA8
    r7 = r7 + 0; // 0x806FACAC
    *(0x11c + r1) = r31; // stw @ 0x806FACB0
    r31 = r7 + 0x4d; // 0x806FACB4
    *(0x118 + r1) = r30; // stw @ 0x806FACB8
    r30 = r5;
    *(0x114 + r1) = r29; // stw @ 0x806FACC0
    r29 = r6;
    *(0x110 + r1) = r28; // stw @ 0x806FACC8
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x806FACD4
    r0 = *(0x78 + r4); // lwz @ 0x806FACD8
    /* li r4, 1 */ // 0x806FACDC
    *(8 + r1) = r0; // stw @ 0x806FACE0
    FUN_805E3430(r3, r4); // bl 0x805E3430
}