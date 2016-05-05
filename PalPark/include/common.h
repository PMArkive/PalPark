#pragma once
#include <map>

typedef unsigned char byte; // 8 bits
typedef unsigned short int uint16; // 16 bits
typedef unsigned int uint32; // 32 bits

static const int NICKLENGTH = 11;
static const int OTLENGTH = 8;
static const int BOXNAMELENGTH = 20;

//Date
struct datefield {
	byte year;
	byte month;
	byte day;
};

//Pokerus
struct pokerus {
	byte days : 4;
	byte strain : 4;
};

//Individual Values
struct ivsfield { // Bitfield for the Pokemon's Individual Values (IVs).
	uint32 hp : 5; // Hit Points
	uint32 attack : 5; // Attack
	uint32 defense : 5; // Defense
	uint32 speed : 5; // Speed
	uint32 spatk : 5; // Special Attack
	uint32 spdef : 5; // Special Defense
uint32: 2;
};

//Effort Values
struct evsfield {
	byte hp; // HP EVs
	byte attack; // Attack EVs
	byte defense; // Defense EVs
	byte speed; // Speed EVs
	byte spatk; // Special Attack EVs
	byte spdef; // Special Defnse EVs
};

//Contest
struct contestfield {
	byte cool; // Cool
	byte beauty; // Beauty; used for Feebas evolution (to Milotic)
	byte cute; // Cute
	byte smart; // Smart
	byte tough; // Tough
	byte sheen; // Sheen
};

//Spinda spot coordinate
struct spot_coordinates
{
	byte x : 4;
	byte y : 4;
};

//Spinda spot coordinate struct
struct spindaspots_struct
{
	spot_coordinates tr;
	spot_coordinates tl;
	spot_coordinates br;
	spot_coordinates bl;
};

//Genders
namespace Genders
{
	enum genders : byte
	{
		male,
		female,
		genderless
	};
}

namespace GBASpecies
{
	enum gen_3_species : uint16
	{
		NOTHING = 0,
		bulbasaur = 1,
		ivysaur = 2,
		venusaur = 3,
		charmander = 4,
		charmeleon = 5,
		charizard = 6,
		squirtle = 7,
		wartortle = 8,
		blastoise = 9,
		caterpie = 10,
		metapod = 11,
		butterfree = 12,
		weedle = 13,
		kakuna = 14,
		beedrill = 15,
		pidgey = 16,
		pidgeotto = 17,
		pidgeot = 18,
		rattata = 19,
		raticate = 20,
		spearow = 21,
		fearow = 22,
		ekans = 23,
		arbok = 24,
		pikachu = 25,
		raichu = 26,
		sandshrew = 27,
		sandslash = 28,
		nidoran_f = 29,
		nidorina = 30,
		nidoqueen = 31,
		nidoran_m = 32,
		nidorino = 33,
		nidoking = 34,
		clefairy = 35,
		clefable = 36,
		vulpix = 37,
		ninetales = 38,
		jigglypuff = 39,
		wigglytuff = 40,
		zubat = 41,
		golbat = 42,
		oddish = 43,
		gloom = 44,
		vileplume = 45,
		paras = 46,
		parasect = 47,
		venonat = 48,
		venomoth = 49,
		diglett = 50,
		dugtrio = 51,
		meowth = 52,
		persian = 53,
		psyduck = 54,
		golduck = 55,
		mankey = 56,
		primeape = 57,
		growlithe = 58,
		arcanine = 59,
		poliwag = 60,
		poliwhirl = 61,
		poliwrath = 62,
		abra = 63,
		kadabra = 64,
		alakazam = 65,
		machop = 66,
		machoke = 67,
		machamp = 68,
		bellsprout = 69,
		weepinbell = 70,
		victreebel = 71,
		tentacool = 72,
		tentacruel = 73,
		geodude = 74,
		graveler = 75,
		golem = 76,
		ponyta = 77,
		rapidash = 78,
		slowpoke = 79,
		slowbro = 80,
		magnemite = 81,
		magneton = 82,
		farfetchd = 83,
		doduo = 84,
		dodrio = 85,
		seel = 86,
		dewgong = 87,
		grimer = 88,
		muk = 89,
		shellder = 90,
		cloyster = 91,
		gastly = 92,
		haunter = 93,
		gengar = 94,
		onix = 95,
		drowzee = 96,
		hypno = 97,
		krabby = 98,
		kingler = 99,
		voltorb = 100,
		electrode = 101,
		exeggcute = 102,
		exeggutor = 103,
		cubone = 104,
		marowak = 105,
		hitmonlee = 106,
		hitmonchan = 107,
		lickitung = 108,
		koffing = 109,
		weezing = 110,
		rhyhorn = 111,
		rhydon = 112,
		chansey = 113,
		tangela = 114,
		kangaskhan = 115,
		horsea = 116,
		seadra = 117,
		goldeen = 118,
		seaking = 119,
		staryu = 120,
		starmie = 121,
		mr_mime = 122,
		scyther = 123,
		jynx = 124,
		electabuzz = 125,
		magmar = 126,
		pinsir = 127,
		tauros = 128,
		magikarp = 129,
		gyarados = 130,
		lapras = 131,
		ditto = 132,
		eevee = 133,
		vaporeon = 134,
		jolteon = 135,
		flareon = 136,
		porygon = 137,
		omanyte = 138,
		omastar = 139,
		kabuto = 140,
		kabutops = 141,
		aerodactyl = 142,
		snorlax = 143,
		articuno = 144,
		zapdos = 145,
		moltres = 146,
		dratini = 147,
		dragonair = 148,
		dragonite = 149,
		mewtwo = 150,
		mew = 151,
		chikorita = 152,
		bayleef = 153,
		meganium = 154,
		cyndaquil = 155,
		quilava = 156,
		typhlosion = 157,
		totodile = 158,
		croconaw = 159,
		feraligatr = 160,
		sentret = 161,
		furret = 162,
		hoothoot = 163,
		noctowl = 164,
		ledyba = 165,
		ledian = 166,
		spinarak = 167,
		ariados = 168,
		crobat = 169,
		chinchou = 170,
		lanturn = 171,
		pichu = 172,
		cleffa = 173,
		igglybuff = 174,
		togepi = 175,
		togetic = 176,
		natu = 177,
		xatu = 178,
		mareep = 179,
		flaaffy = 180,
		ampharos = 181,
		bellossom = 182,
		marill = 183,
		azumarill = 184,
		sudowoodo = 185,
		politoed = 186,
		hoppip = 187,
		skiploom = 188,
		jumpluff = 189,
		aipom = 190,
		sunkern = 191,
		sunflora = 192,
		yanma = 193,
		wooper = 194,
		quagsire = 195,
		espeon = 196,
		umbreon = 197,
		murkrow = 198,
		slowking = 199,
		misdreavus = 200,
		unown = 201,
		wobbuffet = 202,
		girafarig = 203,
		pineco = 204,
		forretress = 205,
		dunsparce = 206,
		gligar = 207,
		steelix = 208,
		snubbull = 209,
		granbull = 210,
		qwilfish = 211,
		scizor = 212,
		shuckle = 213,
		heracross = 214,
		sneasel = 215,
		teddiursa = 216,
		ursaring = 217,
		slugma = 218,
		magcargo = 219,
		swinub = 220,
		piloswine = 221,
		corsola = 222,
		remoraid = 223,
		octillery = 224,
		delibird = 225,
		mantine = 226,
		skarmory = 227,
		houndour = 228,
		houndoom = 229,
		kingdra = 230,
		phanpy = 231,
		donphan = 232,
		porygon2 = 233,
		stantler = 234,
		smeargle = 235,
		tyrogue = 236,
		hitmontop = 237,
		smoochum = 238,
		elekid = 239,
		magby = 240,
		miltank = 241,
		blissey = 242,
		raikou = 243,
		entei = 244,
		suicune = 245,
		larvitar = 246,
		pupitar = 247,
		tyranitar = 248,
		lugia = 249,
		ho_oh = 250,
		celebi = 251,
		treecko = 277,
		grovyle = 278,
		sceptile = 279,
		torchic = 280,
		combusken = 281,
		blaziken = 282,
		mudkip = 283,
		marshtomp = 284,
		swampert = 285,
		poochyena = 286,
		mightyena = 287,
		zigzagoon = 288,
		linoone = 289,
		wurmple = 290,
		silcoon = 291,
		beautifly = 292,
		cascoon = 293,
		dustox = 294,
		lotad = 295,
		lombre = 296,
		ludicolo = 297,
		seedot = 298,
		nuzleaf = 299,
		shiftry = 300,
		taillow = 304,
		swellow = 305,
		wingull = 309,
		pelipper = 310,
		ralts = 392,
		kirlia = 393,
		gardevoir = 394,
		surskit = 311,
		masquerain = 312,
		shroomish = 306,
		breloom = 307,
		slakoth = 364,
		vigoroth = 365,
		slaking = 366,
		nincada = 301,
		ninjask = 302,
		shedinja = 303,
		whismur = 370,
		loudred = 371,
		exploud = 372,
		makuhita = 335,
		hariyama = 336,
		azurill = 350,
		nosepass = 320,
		skitty = 315,
		delcatty = 316,
		sableye = 322,
		mawile = 355,
		aron = 382,
		lairon = 383,
		aggron = 384,
		meditite = 356,
		medicham = 357,
		electrike = 337,
		manectric = 338,
		plusle = 353,
		minun = 354,
		volbeat = 386,
		illumise = 387,
		roselia = 363,
		gulpin = 367,
		swalot = 368,
		carvanha = 330,
		sharpedo = 331,
		wailmer = 313,
		wailord = 314,
		numel = 339,
		camerupt = 340,
		torkoal = 321,
		spoink = 351,
		grumpig = 352,
		spinda = 308,
		trapinch = 332,
		vibrava = 333,
		flygon = 334,
		cacnea = 344,
		cacturne = 345,
		swablu = 358,
		altaria = 359,
		zangoose = 380,
		seviper = 379,
		lunatone = 348,
		solrock = 349,
		barboach = 323,
		whiscash = 324,
		corphish = 326,
		crawdaunt = 327,
		baltoy = 318,
		claydol = 319,
		lileep = 388,
		cradily = 389,
		anorith = 390,
		armaldo = 391,
		feebas = 328,
		milotic = 329,
		castform = 385,
		kecleon = 317,
		shuppet = 377,
		banette = 378,
		duskull = 361,
		dusclops = 362,
		tropius = 369,
		chimecho = 411,
		absol = 376,
		wynaut = 360,
		snorunt = 346,
		glalie = 347,
		spheal = 341,
		sealeo = 342,
		walrein = 343,
		clamperl = 373,
		huntail = 374,
		gorebyss = 375,
		relicanth = 381,
		luvdisc = 325,
		bagon = 395,
		shelgon = 396,
		salamence = 397,
		beldum = 398,
		metang = 399,
		metagross = 400,
		regirock = 401,
		regice = 402,
		registeel = 403,
		latias = 407,
		latios = 408,
		kyogre = 404,
		groudon = 405,
		rayquaza = 406,
		jirachi = 409,
		deoxys = 410
	};
}
namespace Species
{
	enum gen_4_species : uint16
	{
		NOTHING,
		bulbasaur,
		ivysaur,
		venusaur,
		charmander,
		charmeleon,
		charizard,
		squirtle,
		wartortle,
		blastoise,
		caterpie,
		metapod,
		butterfree,
		weedle,
		kakuna,
		beedrill,
		pidgey,
		pidgeotto,
		pidgeot,
		rattata,
		raticate,
		spearow,
		fearow,
		ekans,
		arbok,
		pikachu,
		raichu,
		sandshrew,
		sandslash,
		nidoran_f,
		nidorina,
		nidoqueen,
		nidoran_m,
		nidorino,
		nidoking,
		clefairy,
		clefable,
		vulpix,
		ninetales,
		jigglypuff,
		wigglytuff,
		zubat,
		golbat,
		oddish,
		gloom,
		vileplume,
		paras,
		parasect,
		venonat,
		venomoth,
		diglett,
		dugtrio,
		meowth,
		persian,
		psyduck,
		golduck,
		mankey,
		primeape,
		growlithe,
		arcanine,
		poliwag,
		poliwhirl,
		poliwrath,
		abra,
		kadabra,
		alakazam,
		machop,
		machoke,
		machamp,
		bellsprout,
		weepinbell,
		victreebel,
		tentacool,
		tentacruel,
		geodude,
		graveler,
		golem,
		ponyta,
		rapidash,
		slowpoke,
		slowbro,
		magnemite,
		magneton,
		farfetchd,
		doduo,
		dodrio,
		seel,
		dewgong,
		grimer,
		muk,
		shellder,
		cloyster,
		gastly,
		haunter,
		gengar,
		onix,
		drowzee,
		hypno,
		krabby,
		kingler,
		voltorb,
		electrode,
		exeggcute,
		exeggutor,
		cubone,
		marowak,
		hitmonlee,
		hitmonchan,
		lickitung,
		koffing,
		weezing,
		rhyhorn,
		rhydon,
		chansey,
		tangela,
		kangaskhan,
		horsea,
		seadra,
		goldeen,
		seaking,
		staryu,
		starmie,
		mr_mime,
		scyther,
		jynx,
		electabuzz,
		magmar,
		pinsir,
		tauros,
		magikarp,
		gyarados,
		lapras,
		ditto,
		eevee,
		vaporeon,
		jolteon,
		flareon,
		porygon,
		omanyte,
		omastar,
		kabuto,
		kabutops,
		aerodactyl,
		snorlax,
		articuno,
		zapdos,
		moltres,
		dratini,
		dragonair,
		dragonite,
		mewtwo,
		mew,
		chikorita,
		bayleef,
		meganium,
		cyndaquil,
		quilava,
		typhlosion,
		totodile,
		croconaw,
		feraligatr,
		sentret,
		furret,
		hoothoot,
		noctowl,
		ledyba,
		ledian,
		spinarak,
		ariados,
		crobat,
		chinchou,
		lanturn,
		pichu,
		cleffa,
		igglybuff,
		togepi,
		togetic,
		natu,
		xatu,
		mareep,
		flaaffy,
		ampharos,
		bellossom,
		marill,
		azumarill,
		sudowoodo,
		politoed,
		hoppip,
		skiploom,
		jumpluff,
		aipom,
		sunkern,
		sunflora,
		yanma,
		wooper,
		quagsire,
		espeon,
		umbreon,
		murkrow,
		slowking,
		misdreavus,
		unown,
		wobbuffet,
		girafarig,
		pineco,
		forretress,
		dunsparce,
		gligar,
		steelix,
		snubbull,
		granbull,
		qwilfish,
		scizor,
		shuckle,
		heracross,
		sneasel,
		teddiursa,
		ursaring,
		slugma,
		magcargo,
		swinub,
		piloswine,
		corsola,
		remoraid,
		octillery,
		delibird,
		mantine,
		skarmory,
		houndour,
		houndoom,
		kingdra,
		phanpy,
		donphan,
		porygon2,
		stantler,
		smeargle,
		tyrogue,
		hitmontop,
		smoochum,
		elekid,
		magby,
		miltank,
		blissey,
		raikou,
		entei,
		suicune,
		larvitar,
		pupitar,
		tyranitar,
		lugia,
		ho_oh,
		celebi,
		treecko,
		grovyle,
		sceptile,
		torchic,
		combusken,
		blaziken,
		mudkip,
		marshtomp,
		swampert,
		poochyena,
		mightyena,
		zigzagoon,
		linoone,
		wurmple,
		silcoon,
		beautifly,
		cascoon,
		dustox,
		lotad,
		lombre,
		ludicolo,
		seedot,
		nuzleaf,
		shiftry,
		taillow,
		swellow,
		wingull,
		pelipper,
		ralts,
		kirlia,
		gardevoir,
		surskit,
		masquerain,
		shroomish,
		breloom,
		slakoth,
		vigoroth,
		slaking,
		nincada,
		ninjask,
		shedinja,
		whismur,
		loudred,
		exploud,
		makuhita,
		hariyama,
		azurill,
		nosepass,
		skitty,
		delcatty,
		sableye,
		mawile,
		aron,
		lairon,
		aggron,
		meditite,
		medicham,
		electrike,
		manectric,
		plusle,
		minun,
		volbeat,
		illumise,
		roselia,
		gulpin,
		swalot,
		carvanha,
		sharpedo,
		wailmer,
		wailord,
		numel,
		camerupt,
		torkoal,
		spoink,
		grumpig,
		spinda,
		trapinch,
		vibrava,
		flygon,
		cacnea,
		cacturne,
		swablu,
		altaria,
		zangoose,
		seviper,
		lunatone,
		solrock,
		barboach,
		whiscash,
		corphish,
		crawdaunt,
		baltoy,
		claydol,
		lileep,
		cradily,
		anorith,
		armaldo,
		feebas,
		milotic,
		castform,
		kecleon,
		shuppet,
		banette,
		duskull,
		dusclops,
		tropius,
		chimecho,
		absol,
		wynaut,
		snorunt,
		glalie,
		spheal,
		sealeo,
		walrein,
		clamperl,
		huntail,
		gorebyss,
		relicanth,
		luvdisc,
		bagon,
		shelgon,
		salamence,
		beldum,
		metang,
		metagross,
		regirock,
		regice,
		registeel,
		latias,
		latios,
		kyogre,
		groudon,
		rayquaza,
		jirachi,
		deoxys,
		turtwig,
		grotle,
		torterra,
		chimchar,
		monferno,
		infernape,
		piplup,
		prinplup,
		empoleon,
		starly,
		staravia,
		staraptor,
		bidoof,
		bibarel,
		kricketot,
		kricketune,
		shinx,
		luxio,
		luxray,
		budew,
		roserade,
		cranidos,
		rampardos,
		shieldon,
		bastiodon,
		burmy,
		wormadam,
		mothim,
		combee,
		vespiquen,
		pachirisu,
		buizel,
		floatzel,
		cherubi,
		cherrim,
		shellos,
		gastrodon,
		ambipom,
		drifloon,
		drifblim,
		buneary,
		lopunny,
		mismagius,
		honchkrow,
		glameow,
		purugly,
		chingling,
		stunky,
		skuntank,
		bronzor,
		bronzong,
		bonsly,
		mime_jr,
		happiny,
		chatot,
		spiritomb,
		gible,
		gabite,
		garchomp,
		munchlax,
		riolu,
		lucario,
		hippopotas,
		hippowdon,
		skorupi,
		drapion,
		croagunk,
		toxicroak,
		carnivine,
		finneon,
		lumineon,
		mantyke,
		snover,
		abomasnow,
		weavile,
		magnezone,
		lickilicky,
		rhyperior,
		tangrowth,
		electivire,
		magmortar,
		togekiss,
		yanmega,
		leafeon,
		glaceon,
		gliscor,
		mamoswine,
		porygon_z,
		gallade,
		probopass,
		dusknoir,
		froslass,
		rotom,
		uxie,
		mesprit,
		azelf,
		dialga,
		palkia,
		heatran,
		regigigas,
		giratina,
		cresselia,
		phione,
		manaphy,
		darkrai,
		shaymin,
		arceus
	};
}

std::map<GBASpecies::gen_3_species, Species::gen_4_species> create_map();
