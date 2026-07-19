/* Function at 0x8080134C, size=48 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8080134C(int r3, int r4, int r5)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    r30 = r3;
    /* li r3, 0x4c */ // 0x80801368
    *(0xc4 + r1) = r29; // stw @ 0x8080136C
    *(0xc0 + r1) = r28; // stw @ 0x80801370
    r28 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
}