/* Function at 0x806D4420, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806D4420(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D4430
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D4438
    r30 = r3;
    if (==) goto 0x0x806d44b8;
    /* li r4, -1 */ // 0x806D4444
    r3 = r3 + 0x16bc; // 0x806D4448
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0x1540; // 0x806D4450
    /* li r4, -1 */ // 0x806D4454
    FUN_8066CEF8(r4, r3, r3, r4); // bl 0x8066CEF8
    /* lis r4, 0 */ // 0x806D445C
    r3 = r30 + 0x668; // 0x806D4460
    r4 = r4 + 0; // 0x806D4464
    /* li r5, 0x17c */ // 0x806D4468
    /* li r6, 0xa */ // 0x806D446C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x4f4; // 0x806D4474
    /* li r4, -1 */ // 0x806D4478
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x290 */ // 0x806D4480
    if (==) goto 0x0x806d4490;
    /* li r4, 0 */ // 0x806D4488
    FUN_806498AC(r4, r4); // bl 0x806498AC
}