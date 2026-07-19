/* Function at 0x8062A81C, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8062A81C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    /* li r3, 0x100 */ // 0x8062A830
    *(0x18 + r1) = r30; // stw @ 0x8062A834
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x8062A83C
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8062A844
    r28 = r4;
    FUN_805E3430(); // bl 0x805E3430
}