/* Function at 0x806235C4, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806235C4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806235CC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806235E0
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x806235E8
    r0 = *(0 + r5); // lbz @ 0x806235EC
    r31 = *(0 + r4); // lwz @ 0x806235F0
    if (==) goto 0x0x80623684;
    if (!=) goto 0x0x80623630;
    /* li r3, 0x294 */ // 0x80623604
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x80623628;
    FUN_80605800(r3); // bl 0x80605800
    /* lis r3, 0 */ // 0x8062361C
    r3 = r3 + 0; // 0x80623620
    *(0xc + r28) = r3; // stw @ 0x80623624
    *(0x10 + r29) = r28; // stw @ 0x80623628
    /* b 0x80623658 */ // 0x8062362C
    /* li r3, 0x2c4 */ // 0x80623630
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x80623654;
    FUN_806153AC(r3); // bl 0x806153AC
    /* lis r3, 0 */ // 0x80623648
    r3 = r3 + 0; // 0x8062364C
    *(0xc + r28) = r3; // stw @ 0x80623650
}