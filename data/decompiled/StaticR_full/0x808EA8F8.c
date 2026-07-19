/* Function at 0x808EA8F8, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808EA8F8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808EA910
    r28 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808EA91C
    /* li r29, 0 */ // 0x808EA920
    /* li r31, 0 */ // 0x808EA924
    /* b 0x808ea978 */ // 0x808EA928
    r0 = *(0x10 + r28); // lwz @ 0x808EA92C
    if (!=) goto 0x0x808ea94c;
    r0 = *(0x6c8 + r28); // lwz @ 0x808EA938
    r4 = *(0x3ec + r28); // lwz @ 0x808EA93C
    r3 = r0 + r31; // 0x808EA940
    FUN_806CA628(); // bl 0x806CA628
    /* b 0x808ea970 */ // 0x808EA948
    r12 = *(0 + r28); // lwz @ 0x808EA94C
    r3 = r28;
    r12 = *(0x10 + r12); // lwz @ 0x808EA954
    /* mtctr r12 */ // 0x808EA958
    /* bctrl  */ // 0x808EA95C
    r0 = *(0x6c8 + r28); // lwz @ 0x808EA960
    r4 = r3;
    r3 = r0 + r31; // 0x808EA968
    FUN_806CA628(r4); // bl 0x806CA628
    r31 = r31 + 0x188; // 0x808EA970
    r29 = r29 + 1; // 0x808EA974
    if (<) goto 0x0x808ea92c;
    r0 = *(0x24 + r1); // lwz @ 0x808EA980
    r31 = *(0x1c + r1); // lwz @ 0x808EA984
    r30 = *(0x18 + r1); // lwz @ 0x808EA988
    r29 = *(0x14 + r1); // lwz @ 0x808EA98C
    r28 = *(0x10 + r1); // lwz @ 0x808EA990
    return;
}