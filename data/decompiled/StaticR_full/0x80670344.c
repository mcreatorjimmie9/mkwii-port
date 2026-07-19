/* Function at 0x80670344, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80670344(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80670358
    r29 = r3;
    r0 = *(0xf4 + r3); // lwz @ 0x80670360
    if (<) goto 0x0x80670380;
    FUN_805B9C50(); // bl 0x805B9C50
    /* li r3, -1 */ // 0x80670370
    /* li r0, 0 */ // 0x80670374
    *(0xf4 + r29) = r3; // stw @ 0x80670378
    *(0xe8 + r29) = r0; // stw @ 0x8067037C
    /* lis r3, 0x1062 */ // 0x80670380
    /* lis r31, -0x8000 */ // 0x80670384
    r30 = r3 + 0x4dd3; // 0x80670388
    /* b 0x806703a8 */ // 0x8067038C
    r0 = *(0xf8 + r31); // lwz @ 0x80670390
    /* li r3, 0 */ // 0x80670394
    /* srwi r0, r0, 2 */ // 0x80670398
    r0 = r30 * r0; // 0x8067039C
    /* srwi r4, r0, 6 */ // 0x806703A0
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0xac + r29); // lwz @ 0x806703A8
    if (!=) goto 0x0x80670390;
    FUN_805B9874(); // bl 0x805B9874
    r0 = *(0x24 + r1); // lwz @ 0x806703B8
    r31 = *(0x1c + r1); // lwz @ 0x806703BC
    r30 = *(0x18 + r1); // lwz @ 0x806703C0
    r29 = *(0x14 + r1); // lwz @ 0x806703C4
    return;
}