/* Function at 0x806A3AE8, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806A3AE8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x17c; // 0x806A3AF8
    *(8 + r1) = r30; // stw @ 0x806A3AFC
    /* li r30, 0 */ // 0x806A3B00
    r3 = r31 + 0x98; // 0x806A3B04
    /* li r4, 3 */ // 0x806A3B08
    FUN_8069F4B0(r3, r4); // bl 0x8069F4B0
    r3 = *(0x38 + r3); // lwz @ 0x806A3B10
    r0 = r3 + -1; // 0x806A3B14
    if (<=) goto 0x0x806a3b2c;
    r0 = r3 + -4; // 0x806A3B20
    if (>) goto 0x0x806a3b34;
    /* li r3, 0 */ // 0x806A3B2C
    /* b 0x806a3b68 */ // 0x806A3B30
    r3 = r31 + 0x98; // 0x806A3B34
    /* li r4, 2 */ // 0x806A3B38
    FUN_8069F4B0(r3, r3, r4); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806A3B40
    if (!=) goto 0x0x806a3b54;
    /* li r3, 0 */ // 0x806A3B4C
    /* b 0x806a3b68 */ // 0x806A3B50
    r30 = r30 + 1; // 0x806A3B54
    r31 = r31 + 0x174; // 0x806A3B58
    if (<) goto 0x0x806a3b04;
    /* li r3, 1 */ // 0x806A3B64
    r0 = *(0x14 + r1); // lwz @ 0x806A3B68
    r31 = *(0xc + r1); // lwz @ 0x806A3B6C
    r30 = *(8 + r1); // lwz @ 0x806A3B70
    return;
}