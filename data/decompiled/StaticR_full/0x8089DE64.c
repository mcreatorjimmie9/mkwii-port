/* Function at 0x8089DE64, size=460 bytes */
/* Stack frame: 0 bytes */

void FUN_8089DE64(int r3, int r4, int r5, int r6)
{
    /* lis r4, 0 */ // 0x8089DE64
    /* li r0, 2 */ // 0x8089DE68
    r4 = r4 + 0; // 0x8089DE6C
    /* li r6, 0 */ // 0x8089DE70
    r5 = r4 + 0x210; // 0x8089DE74
    /* mtctr r0 */ // 0x8089DE78
    r0 = *(0 + r5); // lwz @ 0x8089DE7C
    if (!=) goto 0x0x8089de90;
    /* li r3, 0 */ // 0x8089DE88
    return;
    r0 = *(4 + r5); // lwz @ 0x8089DE90
    if (!=) goto 0x0x8089dea4;
    /* li r3, 0 */ // 0x8089DE9C
    return;
    r0 = *(8 + r5); // lwz @ 0x8089DEA4
    if (!=) goto 0x0x8089deb8;
    /* li r3, 0 */ // 0x8089DEB0
    return;
    r0 = *(0xc + r5); // lwz @ 0x8089DEB8
    if (!=) goto 0x0x8089decc;
    /* li r3, 0 */ // 0x8089DEC4
    return;
    r0 = *(0x10 + r5); // lwz @ 0x8089DECC
    if (!=) goto 0x0x8089dee0;
    /* li r3, 0 */ // 0x8089DED8
    return;
    r0 = *(0x14 + r5); // lwz @ 0x8089DEE0
    if (!=) goto 0x0x8089def4;
    /* li r3, 0 */ // 0x8089DEEC
    return;
    r5 = r5 + 0x18; // 0x8089DEF4
    r6 = r6 + 5; // 0x8089DEF8
    if (counter-- != 0) goto 0x0x8089de7c;
    /* li r0, 2 */ // 0x8089DF00
    r5 = r4 + 0x240; // 0x8089DF04
    /* li r6, 0 */ // 0x8089DF08
    /* mtctr r0 */ // 0x8089DF0C
    r0 = *(0 + r5); // lwz @ 0x8089DF10
    if (!=) goto 0x0x8089df24;
    /* li r3, 1 */ // 0x8089DF1C
    return;
    r0 = *(4 + r5); // lwz @ 0x8089DF24
    if (!=) goto 0x0x8089df38;
    /* li r3, 1 */ // 0x8089DF30
    return;
    r0 = *(8 + r5); // lwz @ 0x8089DF38
    if (!=) goto 0x0x8089df4c;
    /* li r3, 1 */ // 0x8089DF44
    return;
    r0 = *(0xc + r5); // lwz @ 0x8089DF4C
    if (!=) goto 0x0x8089df60;
    /* li r3, 1 */ // 0x8089DF58
    return;
    r0 = *(0x10 + r5); // lwz @ 0x8089DF60
    if (!=) goto 0x0x8089df74;
    /* li r3, 1 */ // 0x8089DF6C
    return;
    r0 = *(0x14 + r5); // lwz @ 0x8089DF74
    if (!=) goto 0x0x8089df88;
    /* li r3, 1 */ // 0x8089DF80
    return;
    r5 = r5 + 0x18; // 0x8089DF88
    r6 = r6 + 5; // 0x8089DF8C
    if (counter-- != 0) goto 0x0x8089df10;
    /* li r0, 2 */ // 0x8089DF94
    r4 = r4 + 0x270; // 0x8089DF98
    /* li r5, 0 */ // 0x8089DF9C
    /* mtctr r0 */ // 0x8089DFA0
    r0 = *(0 + r4); // lwz @ 0x8089DFA4
    if (!=) goto 0x0x8089dfb8;
    /* li r3, 2 */ // 0x8089DFB0
    return;
    r0 = *(4 + r4); // lwz @ 0x8089DFB8
    if (!=) goto 0x0x8089dfcc;
    /* li r3, 2 */ // 0x8089DFC4
    return;
    r0 = *(8 + r4); // lwz @ 0x8089DFCC
    if (!=) goto 0x0x8089dfe0;
    /* li r3, 2 */ // 0x8089DFD8
    return;
    r0 = *(0xc + r4); // lwz @ 0x8089DFE0
    if (!=) goto 0x0x8089dff4;
    /* li r3, 2 */ // 0x8089DFEC
    return;
    r0 = *(0x10 + r4); // lwz @ 0x8089DFF4
    if (!=) goto 0x0x8089e008;
    /* li r3, 2 */ // 0x8089E000
    return;
    r0 = *(0x14 + r4); // lwz @ 0x8089E008
    if (!=) goto 0x0x8089e01c;
    /* li r3, 2 */ // 0x8089E014
    return;
    r4 = r4 + 0x18; // 0x8089E01C
    r5 = r5 + 5; // 0x8089E020
    if (counter-- != 0) goto 0x0x8089dfa4;
    /* li r3, -1 */ // 0x8089E028
    return;
}