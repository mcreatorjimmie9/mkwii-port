/* Function at 0x80807828, size=44 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80807828(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8080783C
    /* li r30, 1 */ // 0x80807840
    *(0x34 + r1) = r29; // stw @ 0x80807844
    /* li r29, 1 */ // 0x80807848
    /* lfs f1, 0x30(r3) */ // 0x8080784C
    FUN_805E3430(); // bl 0x805E3430
}