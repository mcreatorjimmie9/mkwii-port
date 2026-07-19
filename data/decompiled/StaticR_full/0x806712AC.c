/* Function at 0x806712AC, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806712AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 2 */ // 0x806712B4
    /* li r4, 1 */ // 0x806712B8
    /* li r0, -1 */ // 0x806712C0
    *(0x1c + r1) = r31; // stw @ 0x806712C4
    *(0x18 + r1) = r30; // stw @ 0x806712C8
    *(0x14 + r1) = r29; // stw @ 0x806712CC
    r29 = r3;
    *(8 + r3) = r5; // stw @ 0x806712D4
    *(0xc + r3) = r4; // stb @ 0x806712D8
    *(0x1c + r3) = r0; // stw @ 0x806712DC
    *(0x20 + r3) = r0; // stw @ 0x806712E0
    r3 = *(0x38 + r3); // lwz @ 0x806712E4
    FUN_8066833C(); // bl 0x8066833C
    r12 = *(0 + r29); // lwz @ 0x806712EC
    r3 = r29;
    r12 = *(0x30 + r12); // lwz @ 0x806712F4
    /* mtctr r12 */ // 0x806712F8
    /* bctrl  */ // 0x806712FC
    r3 = *(0x38 + r29); // lwz @ 0x80671300
    r12 = *(0 + r3); // lwz @ 0x80671304
    r12 = *(0x28 + r12); // lwz @ 0x80671308
    /* mtctr r12 */ // 0x8067130C
    /* bctrl  */ // 0x80671310
    r30 = *(0x38 + r29); // lwz @ 0x80671314
    if (!=) goto 0x0x80671328;
    /* li r30, 0 */ // 0x80671320
    /* b 0x8067137c */ // 0x80671324
    /* lis r31, 0 */ // 0x80671328
    r31 = r31 + 0; // 0x8067132C
    if (==) goto 0x0x80671378;
    r12 = *(0 + r30); // lwz @ 0x80671334
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x8067133C
    /* mtctr r12 */ // 0x80671340
    /* bctrl  */ // 0x80671344
    /* b 0x80671360 */ // 0x80671348
    if (!=) goto 0x0x8067135c;
    /* li r0, 1 */ // 0x80671354
    /* b 0x8067136c */ // 0x80671358
    r3 = *(0 + r3); // lwz @ 0x8067135C
    if (!=) goto 0x0x8067134c;
    /* li r0, 0 */ // 0x80671368
    if (==) goto 0x0x80671378;
    /* b 0x8067137c */ // 0x80671374
    /* li r30, 0 */ // 0x80671378
    if (==) goto 0x0x806713a4;
    /* li r31, 0 */ // 0x80671384
    r3 = r30;
    r4 = r31;
    /* li r5, 0 */ // 0x80671390
    FUN_8066B6CC(r3, r4, r5); // bl 0x8066B6CC
    r31 = r31 + 1; // 0x80671398
    if (<) goto 0x0x80671388;
    r3 = r29 + 0x24; // 0x806713A4
    FUN_8064DF74(r3); // bl 0x8064DF74
    r0 = *(0x24 + r1); // lwz @ 0x806713AC
    r31 = *(0x1c + r1); // lwz @ 0x806713B0
    r30 = *(0x18 + r1); // lwz @ 0x806713B4
    r29 = *(0x14 + r1); // lwz @ 0x806713B8
    return;
}