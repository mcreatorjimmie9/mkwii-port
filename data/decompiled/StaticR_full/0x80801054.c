/* Function at 0x80801054, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80801054(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x8080105C
    *(0x14 + r1) = r0; // stw @ 0x80801060
    *(0xc + r1) = r31; // stw @ 0x80801064
    r0 = *(0 + r3); // lwz @ 0x80801068
    if (!=) goto 0x0x80801108;
    /* li r3, 0x68 */ // 0x80801074
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x80801100;
    /* lis r4, 0 */ // 0x80801088
    r4 = r4 + 0; // 0x8080108C
    *(0x10 + r3) = r4; // stw @ 0x80801090
    FUN_805E3430(r4, r4); // bl 0x805E3430
}