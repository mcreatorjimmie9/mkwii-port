/* Function at 0x80801124, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80801124(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x8080112C
    *(0x14 + r1) = r0; // stw @ 0x80801130
    *(0xc + r1) = r31; // stw @ 0x80801134
    r31 = *(0 + r3); // lwz @ 0x80801138
    if (==) goto 0x0x808011cc;
    /* li r0, 0 */ // 0x80801144
    *(0 + r3) = r0; // stw @ 0x80801148
    if (==) goto 0x0x808011cc;
    /* lis r3, 0 */ // 0x80801150
    r3 = r3 + 0; // 0x80801154
    *(0x10 + r31) = r3; // stw @ 0x80801158
    r3 = *(0x5c + r31); // lwz @ 0x8080115C
    if (==) goto 0x0x80801180;
    if (==) goto 0x0x80801180;
    r12 = *(0 + r3); // lwz @ 0x8080116C
    /* li r4, 1 */ // 0x80801170
    r12 = *(8 + r12); // lwz @ 0x80801174
    /* mtctr r12 */ // 0x80801178
    /* bctrl  */ // 0x8080117C
    /* li r0, 0 */ // 0x80801184
    *(0x5c + r31) = r0; // stw @ 0x80801188
    if (==) goto 0x0x808011c4;
    /* lis r3, 0 */ // 0x80801190
    /* lis r4, 0 */ // 0x80801194
    r3 = r3 + 0; // 0x80801198
    *(0 + r31) = r3; // stw @ 0x8080119C
    r3 = *(0 + r4); // lwz @ 0x808011A0
    if (==) goto 0x0x808011b8;
    *(0 + r4) = r0; // stw @ 0x808011AC
    /* li r4, 1 */ // 0x808011B0
    FUN_80801284(r4); // bl 0x80801284
    r3 = r31;
    /* li r4, 0 */ // 0x808011BC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x808011CC
    r31 = *(0xc + r1); // lwz @ 0x808011D0
    return;
}