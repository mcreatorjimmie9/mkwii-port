/* Function at 0x806FFB54, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806FFB54(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x806FFB5C
    /* lis r3, 1 */ // 0x806FFB60
    *(0x24 + r1) = r0; // stw @ 0x806FFB64
    r0 = r3 + -0x6c10; // 0x806FFB68
    *(0x1c + r1) = r31; // stw @ 0x806FFB6C
    *(0x18 + r1) = r30; // stw @ 0x806FFB70
    r30 = r4;
    r5 = *(0 + r5); // lwz @ 0x806FFB7C
    r3 = *(0x36 + r5); // lha @ 0x806FFB80
    /* clrlwi r3, r3, 0x18 */ // 0x806FFB84
    r0 = r0 * r3; // 0x806FFB88
    r3 = r5 + r0; // 0x806FFB8C
    r31 = r3 + 0x4e; // 0x806FFB90
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
}