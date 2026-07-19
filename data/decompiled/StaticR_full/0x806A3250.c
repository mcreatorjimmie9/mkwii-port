/* Function at 0x806A3250, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A3250(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A325C
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806A3268
    /* li r0, 0 */ // 0x806A326C
    r3 = r3 + 0; // 0x806A3270
    /* lis r4, 0 */ // 0x806A3274
    r6 = r3 + 0x3c; // 0x806A3278
    /* lis r5, 0 */ // 0x806A327C
    *(0 + r31) = r3; // stw @ 0x806A3280
    r3 = r31 + 0x17c; // 0x806A3284
    r4 = r4 + 0; // 0x806A3288
    r5 = r5 + 0; // 0x806A328C
    *(0x174 + r31) = r6; // stw @ 0x806A3290
    /* li r6, 0x174 */ // 0x806A3294
    /* li r7, 2 */ // 0x806A3298
    *(0x178 + r31) = r0; // stw @ 0x806A329C
    FUN_805E3430(r5, r6, r7); // bl 0x805E3430
}