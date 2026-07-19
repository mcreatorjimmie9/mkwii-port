/* Function at 0x805ABB2C, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805ABB2C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r4 = r3;
    /* li r3, 4 */ // 0x805ABB38
    r3 = r3 | 4; // 0x805ABB40
    *(0x1c + r1) = r31; // stw @ 0x805ABB44
    *(0x18 + r1) = r30; // stw @ 0x805ABB48
    *(0x14 + r1) = r29; // stw @ 0x805ABB4C
    *(0x10 + r1) = r28; // stw @ 0x805ABB50
    /* mtspr 0x392, r3 */ // 0x805ABB54
    /* li r3, 5 */ // 0x805ABB58
    r3 = r3 | 5; // 0x805ABB5C
    /* mtspr 0x393, r3 */ // 0x805ABB60
    /* li r3, 6 */ // 0x805ABB64
    r3 = r3 | 6; // 0x805ABB68
    /* mtspr 0x394, r3 */ // 0x805ABB6C
    /* li r3, 7 */ // 0x805ABB70
    r3 = r3 | 7; // 0x805ABB74
    /* mtspr 0x395, r3 */ // 0x805ABB78
    r3 = *(8 + r4); // lwz @ 0x805ABB7C
    FUN_805E3430(r3); // bl 0x805E3430
}