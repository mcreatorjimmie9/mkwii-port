/* Function at 0x8073A810, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073A810(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073A820
    r30 = r3;
    r31 = *(0x22c + r3); // lwz @ 0x8073A828
    if (!=) goto 0x0x8073a83c;
    /* li r0, 0 */ // 0x8073A834
    /* b 0x8073a8d4 */ // 0x8073A838
    r3 = r31 + 0x74; // 0x8073A83C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073a854;
    /* li r3, 0 */ // 0x8073A84C
    /* b 0x8073a858 */ // 0x8073A850
    r3 = *(0xc + r3); // lwz @ 0x8073A854
    /* li r0, 0 */ // 0x8073A85C
    if (==) goto 0x0x8073a86c;
    if (!=) goto 0x0x8073a870;
}