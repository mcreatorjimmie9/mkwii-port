/* Function at 0x806EA264, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806EA264(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806EA278
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806EA280
    r29 = r3;
    FUN_806EA380(); // bl 0x806EA380
    /* mulli r0, r31, 0x14 */ // 0x806EA28C
    /* slwi r3, r3, 2 */ // 0x806EA290
    r0 = r29 + r0; // 0x806EA294
    /* lhzx r0, r3, r0 */ // 0x806EA298
    r0 = r30 + r0; // 0x806EA29C
    if (<=) goto 0x0x806ea2ac;
    /* li r0, 0x270f */ // 0x806EA2A8
    r31 = *(0x1c + r1); // lwz @ 0x806EA2AC
    /* clrlwi r3, r0, 0x10 */ // 0x806EA2B0
    r30 = *(0x18 + r1); // lwz @ 0x806EA2B4
    r29 = *(0x14 + r1); // lwz @ 0x806EA2B8
    r0 = *(0x24 + r1); // lwz @ 0x806EA2BC
    return;
}