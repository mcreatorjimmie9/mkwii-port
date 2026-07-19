/* Function at 0x808BF214, size=60 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808BF214(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x34 + r1) = r29; // stw @ 0x808BF22C
    r29 = r4;
    *(0x30 + r1) = r28; // stw @ 0x808BF234
    r28 = r3;
    if (>=) goto 0x0x808bf2c0;
    /* li r3, 0x254 */ // 0x808BF240
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
}