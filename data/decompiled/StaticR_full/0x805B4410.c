/* Function at 0x805B4410, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B4410(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B441C
    r31 = r3;
    r0 = *(0x4158 + r3); // lwz @ 0x805B4424
    if (==) goto 0x0x805b4438;
    /* li r3, 2 */ // 0x805B4430
    /* b 0x805b4458 */ // 0x805B4434
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805b444c;
    /* li r3, 1 */ // 0x805B4444
    /* b 0x805b4458 */ // 0x805B4448
    /* li r0, 3 */ // 0x805B444C
}