/* Function at 0x806E44C0, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806E44C0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806E44D0
    *(0x18 + r1) = r30; // stw @ 0x806E44D4
    /* li r30, 0 */ // 0x806E44D8
    *(0x14 + r1) = r29; // stw @ 0x806E44DC
    r29 = r4;
    /* li r4, 0 */ // 0x806E44E4
    r3 = *(0 + r31); // lwz @ 0x806E44E8
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806e450c;
    r3 = *(0 + r31); // lwz @ 0x806E44F8
    /* li r4, 1 */ // 0x806E44FC
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806e4510;
    /* li r30, 1 */ // 0x806E450C
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x806E4514
    r30 = *(0x18 + r1); // lwz @ 0x806E4518
    r29 = *(0x14 + r1); // lwz @ 0x806E451C
    r0 = *(0x24 + r1); // lwz @ 0x806E4520
    return;
}