/* Function at 0x80827858, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80827858(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x80827860
    /* lis r4, 0 */ // 0x80827864
    *(0x1c + r1) = r31; // stw @ 0x8082786C
    /* lis r31, 0 */ // 0x80827870
    *(0x18 + r1) = r30; // stw @ 0x80827874
    *(0x14 + r1) = r29; // stw @ 0x80827878
    r29 = r3;
    r5 = *(0 + r31); // lwz @ 0x80827880
    r0 = *(0 + r6); // lwz @ 0x80827884
    *(0 + r5) = r0; // sth @ 0x80827888
    r30 = *(0 + r4); // lwz @ 0x8082788C
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    /* li r0, 0x14 */ // 0x80827898
    if (<) goto 0x0x808278d0;
    r3 = r30;
    FUN_806E4370(r3); // bl 0x806E4370
    if (==) goto 0x0x808278d0;
    r6 = *(0 + r31); // lwz @ 0x808278B4
    r3 = r30;
    r4 = r29;
    /* li r5, 7 */ // 0x808278C0
    /* li r7, 0x14 */ // 0x808278C4
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x808278f0 */ // 0x808278CC
    /* lis r3, 0 */ // 0x808278D0
    /* lis r5, 0 */ // 0x808278D4
    r6 = *(0 + r5); // lwz @ 0x808278D8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808278E0
    /* li r5, 7 */ // 0x808278E4
    /* li r7, 0x14 */ // 0x808278E8
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x808278F0
    /* lis r3, 0 */ // 0x808278F4
    r30 = *(0x18 + r1); // lwz @ 0x808278F8
    r29 = *(0x14 + r1); // lwz @ 0x808278FC
    r0 = *(0x24 + r1); // lwz @ 0x80827900
    r3 = *(0 + r3); // lwz @ 0x80827904
    return;
}