/* Function at 0x806388EC, size=24 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

void FUN_806388EC(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* li r3, 0xcc */ // 0x806388F4
    *(0x34 + r1) = r0; // stw @ 0x806388F8
    /* stmw r24, 0x10(r1) */ // 0x806388FC
    FUN_805E3430(r3); // bl 0x805E3430
}