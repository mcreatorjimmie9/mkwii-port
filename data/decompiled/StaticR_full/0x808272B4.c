/* Function at 0x808272B4, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808272B4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x808272BC
    /* lis r5, 0 */ // 0x808272C0
    *(0x1c + r1) = r31; // stw @ 0x808272C8
    /* lis r31, 0 */ // 0x808272CC
    *(0x18 + r1) = r30; // stw @ 0x808272D0
    *(0x14 + r1) = r29; // stw @ 0x808272D4
    r29 = r3;
    r7 = *(0 + r31); // lwz @ 0x808272DC
    *(2 + r7) = r4; // stb @ 0x808272E0
    r3 = *(0 + r31); // lwz @ 0x808272E4
    r0 = *(0 + r6); // lwz @ 0x808272E8
    *(0 + r3) = r0; // sth @ 0x808272EC
    r30 = *(0 + r5); // lwz @ 0x808272F0
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    /* li r0, 3 */ // 0x808272FC
    if (<) goto 0x0x80827334;
    r3 = r30;
    FUN_806E4370(r3); // bl 0x806E4370
    if (==) goto 0x0x80827334;
    r6 = *(0 + r31); // lwz @ 0x80827318
    r3 = r30;
    r4 = r29;
    /* li r5, 1 */ // 0x80827324
    /* li r7, 3 */ // 0x80827328
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x80827354 */ // 0x80827330
    /* lis r3, 0 */ // 0x80827334
    /* lis r5, 0 */ // 0x80827338
    r6 = *(0 + r5); // lwz @ 0x8082733C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x80827344
    /* li r5, 1 */ // 0x80827348
    /* li r7, 3 */ // 0x8082734C
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x80827354
    /* lis r3, 0 */ // 0x80827358
    r30 = *(0x18 + r1); // lwz @ 0x8082735C
    r29 = *(0x14 + r1); // lwz @ 0x80827360
    r0 = *(0x24 + r1); // lwz @ 0x80827364
    r3 = *(0 + r3); // lwz @ 0x80827368
    return;
}