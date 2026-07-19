/* Function at 0x8063C860, size=60 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8063C860(int r3, int r4)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8063C868
    *(0x88 + r1) = r30; // stw @ 0x8063C874
    r30 = r3;
    *(0x84 + r1) = r29; // stw @ 0x8063C87C
    /* lis r29, 0 */ // 0x8063C880
    r29 = r29 + 0; // 0x8063C884
    r4 = *(0 + r4); // lwz @ 0x8063C888
    r3 = *(0x24 + r3); // lwz @ 0x8063C88C
    r31 = *(0x10 + r4); // lwz @ 0x8063C890
    /* li r4, 1 */ // 0x8063C894
    FUN_805E3430(r4); // bl 0x805E3430
}