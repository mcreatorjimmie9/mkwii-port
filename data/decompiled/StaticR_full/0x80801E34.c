/* Function at 0x80801E34, size=60 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80801E34(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x80801E40
    r31 = r3;
    r4 = *(0x14 + r3); // lwz @ 0x80801E48
    r3 = *(0x10 + r4); // lwz @ 0x80801E4C
    r3 = *(0 + r3); // lwz @ 0x80801E50
    if (==) goto 0x0x80801e6c;
    r3 = r3 + 0xc; // 0x80801E5C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80801e74 */ // 0x80801E68
}