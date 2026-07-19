/* Function at 0x808CF2C4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808CF2C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808CF2D4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808CF2DC
    r30 = r3;
    if (==) goto 0x0x808cf334;
    if (==) goto 0x0x808cf324;
    /* lis r4, 0 */ // 0x808CF2EC
    /* li r5, 0xb90 */ // 0x808CF2F0
    r4 = r4 + 0; // 0x808CF2F4
    /* li r6, 2 */ // 0x808CF2F8
    r3 = r3 + 0x1a0; // 0x808CF2FC
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (==) goto 0x0x808cf324;
    r3 = r30 + 0x5c; // 0x808CF30C
    /* li r4, -1 */ // 0x808CF310
    FUN_806688C8(r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x808CF31C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808cf334;
    r3 = r30;
}