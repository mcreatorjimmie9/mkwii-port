/* Function at 0x8078DDB0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8078DDB0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078DDC0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078DDC8
    r30 = r3;
    if (==) goto 0x0x8078de08;
    /* lis r4, 0 */ // 0x8078DDD4
    /* li r5, 0xc */ // 0x8078DDD8
    r4 = r4 + 0; // 0x8078DDDC
    /* li r6, 2 */ // 0x8078DDE0
    r3 = r3 + 0x28; // 0x8078DDE4
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, -1 */ // 0x8078DDF0
    FUN_805E3430(r6, r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078de08;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}