/* Function at 0x806C8368, size=52 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806C8368(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806C8370
    r3 = r3 + 0x634; // 0x806C8374
    *(0x34 + r1) = r0; // stw @ 0x806C8378
    *(0x2c + r1) = r31; // stw @ 0x806C837C
    *(0x28 + r1) = r30; // stw @ 0x806C8380
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    r31 = r3;
    /* li r4, 0 */ // 0x806C8390
    /* li r5, 0x16 */ // 0x806C8394
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}