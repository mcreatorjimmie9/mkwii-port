/* Function at 0x805B7148, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805B7148(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 1 */ // 0x805B7150
    /* li r31, 0 */ // 0x805B715C
    *(0x18 + r1) = r30; // stw @ 0x805B7160
    r30 = r4;
    /* li r4, 4 */ // 0x805B7168
    *(0x14 + r1) = r29; // stw @ 0x805B716C
    r29 = r3;
    r5 = *(0x34 + r3); // lwz @ 0x805B7174
    r3 = r3 + 0xe0; // 0x805B7178
    FUN_805E3430(r4, r3); // bl 0x805E3430
}