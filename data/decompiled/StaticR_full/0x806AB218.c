/* Function at 0x806AB218, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806AB218(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806AB224
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AB230
    r3 = r31 + 0x44; // 0x806AB234
    r4 = r4 + 0; // 0x806AB238
    *(0 + r31) = r4; // stw @ 0x806AB23C
    FUN_8066880C(r4, r3, r4); // bl 0x8066880C
    r3 = r31 + 0x190; // 0x806AB244
    FUN_8066CEBC(r3, r4, r3); // bl 0x8066CEBC
    r3 = r31 + 0x304; // 0x806AB24C
    FUN_806A0418(r3, r3); // bl 0x806A0418
    /* lis r7, 0 */ // 0x806AB254
    r6 = *(0 + r7); // lwzu @ 0x806AB258
    /* lis r4, 0 */ // 0x806AB25C
    r3 = r31;
    r5 = *(4 + r7); // lwz @ 0x806AB264
    r4 = r4 + 0; // 0x806AB268
    r0 = *(8 + r7); // lwz @ 0x806AB26C
    *(0x488 + r31) = r0; // stw @ 0x806AB270
    *(0x478 + r31) = r4; // stw @ 0x806AB274
    *(0x47c + r31) = r31; // stw @ 0x806AB278
    *(0x480 + r31) = r6; // stw @ 0x806AB27C
    *(0x484 + r31) = r5; // stw @ 0x806AB280
    *(0x10 + r1) = r0; // stw @ 0x806AB284
    r31 = *(0x1c + r1); // lwz @ 0x806AB288
    r0 = *(0x24 + r1); // lwz @ 0x806AB28C
    *(8 + r1) = r6; // stw @ 0x806AB290
    *(0xc + r1) = r5; // stw @ 0x806AB294
    return;
}