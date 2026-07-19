/* Function at 0x806E7688, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806E7688(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E7694
    r31 = r3;
    FUN_806E76C8(); // bl 0x806E76C8
    r3 = r31;
    FUN_806E7A48(r3); // bl 0x806E7A48
    /* lis r3, 0 */ // 0x806E76A8
    r3 = *(0 + r3); // lwz @ 0x806E76AC
    FUN_806F497C(r3, r3); // bl 0x806F497C
    r0 = *(0x14 + r1); // lwz @ 0x806E76B4
    r31 = *(0xc + r1); // lwz @ 0x806E76B8
    return;
}