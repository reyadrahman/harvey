/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

char *desctab[][2]={
	{"!!!",	"(magnificent or otherwise interesting object)"},
	{"!!",	"(superb)"},
	{"!",	"(remarkable)"},
	{"1st",	"first"},
	{"2nd",	"second"},
	{"3rd",	"third"},
	{"4th",	"fourth"},
	{"5th",	"fifth"},
	{"6th",	"sixth"},
	{"7th",	"seventh"},
	{"8th",	"eighth"},
	{"9th",	"ninth"},
	{"B",	"bright"},
	{"Borealis",	"Borealis"},
	{"C",	"compressed"},
	{"Car",	"Car"},
	{"Cas",	"Cas"},
	{"Cen",	"Cen"},
	{"Cl",	"cluster"},
	{"Cyg",	"Cyg"},
	{"D",	"double"},
	{"Dra",	"Dra"},
	{"Dumbbell",	"Dumbbell"},
	{"E",	"extended"},
	{"F",	"faint"},
	{"L",	"large"},
	{"Lyra",	"Lyra"},
	{"M",	"(in the) middle"},
	{"Merope",	"Merope"},
	{"Milky",	"Milky"},
	{"Mon",	"Mon"},
	{"N",	"(to a) nucleus"},
	{"Neb",	"Nebula"},
	{"Nor",	"Nor"},
	{"Nucl",	"nucleus"},
	{"Nuclei",	"nuclei"},
	{"P",	"poor in stars"},
	{"PN",	"planetary nebula"},
	{"Polarissima",	"Polarissima"},
	{"Praesepe",	"Praesepe"},
	{"Psc",	"Psc"},
	{"R",	"round"},
	{"RA",	"RA"},
	{"RR",	"exactly round"},
	{"Ri",	"rich in stars"},
	{"S",	"small"},
	{"Sco",	"Sco"},
	{"S*",	"small star"},
	{"Way",	"Way"},
	{"ab",	"about"},
	{"about",	"about"},
	{"alm",	"almost"},
	{"alpha",	"α"},
	{"am",	"among"},
	{"annul",	"annular"},
	{"att",	"attached"},
	{"b",	"brighter"},
	{"beautiful",	"beautiful"},
	{"bet",	"between"},
	{"beta",	"β"},
	{"bf",	"brightest to f side"},
	{"biN",	"binuclear"},
	{"bifid",	"bifid"},
	{"bifurcated",	"bifurcated"},
	{"black",	"black"},
	{"blue",	"blue"},
	{"bn",	"brightest to n side"},
	{"border",	"border"},
	{"bp",	"brightest to p side"},
	{"branch",	"branch"},
	{"branched",	"branched"},
	{"branches",	"branches"},
	{"bright",	"bright"},
	{"brighter",	"brighter"},
	{"brightest",	"brightest"},
	{"brightness",	"brightness"},
	{"brush",	"brush"},
	{"bs",	"brightest to s side"},
	{"but",	"but"},
	{"by",	"by"},
	{"c",	"considerably"},
	{"centre",	"centre"},
	{"certain",	"certain"},
	{"chev",	"chevelure"},
	{"chief",	"chief"},
	{"chiefly",	"chiefly"},
	{"circle",	"circle"},
	{"close",	"close"},
	{"cloud",	"cloud"},
	{"cluster",	"cluster"},
	{"clusters",	"clusters"},
	{"co",	"coarse, coarsely"},
	{"com",	"cometic"},
	{"comet",	"comet"},
	{"cometary",	"cometary"},
	{"comp",	"companion"},
	{"condens",	"condensations"},
	{"condensed",	"condensed"},
	{"conn",	"connected"},
	{"connected",	"connected"},
	{"connecting",	"connecting"},
	{"cont",	"in contact"},
	{"corner",	"corner"},
	{"curved",	"curved"},
	{"d",	"diameter"},
	{"decl",	"declination"},
	{"def",	"defined"},
	{"defect",	"defect"},
	{"deg",	"°"},
	{"delta",	"δ"},
	{"dense",	"dense"},
	{"densest",	"densest"},
	{"descr",	"description"},
	{"description",	"description"},
	{"dif",	"diffuse"},
	{"different",	"different"},
	{"diffic",	"difficult"},
	{"difficult",	"difficult"},
	{"diffuse",	"diffuse"},
	{"diffused",	"diffused"},
	{"disc",	"disc"},
	{"dist",	"distant"},
	{"distant",	"distant"},
	{"distinct",	"distinct"},
	{"double",	"double"},
	{"doubtful",	"doubtful"},
	{"dozen",	"dozen"},
	{"e",	"extremely"},
	{"each",	"each"},
	{"edge",	"edge"},
	{"ee",	"most extremely"},
	{"ellipt",	"elliptical"},
	{"elliptic",	"elliptical"},
	{"end",	"end"},
	{"ends",	"ends"},
	{"epsilon",	"ε"},
	{"equilateral",	"equilateral"},
	{"er",	"easily resolvable"},
	{"eta",	"η"},
	{"evidently",	"evidently"},
	{"exc",	"excentric"},
	{"excen",	"excentric"},
	{"excent",	"excentric"},
	{"excentric",	"excentric"},
	{"extends",	"extends"},
	{"f",	"following"},
	{"faint",	"faint"},
	{"fainter",	"fainter"},
	{"faintest",	"faintest"},
	{"falcate",	"falcate"},
	{"fan",	"fan"},
	{"farther",	"farther"},
	{"field",	"field"},
	{"fine",	"fine"},
	{"forming",	"forming"},
	{"forms",	"forms"},
	{"found",	"found"},
	{"from",	"from"},
	{"g",	"gradually"},
	{"gamma",	"γ"},
	{"gaseous",	"gaseous"},
	{"gl",	"gradually a little"},
	{"glob. cl.",	"globular cluster"},
	{"gr",	"group"},
	{"great",	"great"},
	{"greater",	"greater"},
	{"group",	"group"},
	{"groups",	"groups"},
	{"i",	"irregular"},
	{"iF",	"irregular figure"},
	{"if",	"if"},
	{"in",	"in"},
	{"indistinct",	"indistinct"},
	{"incl",	"including"},
	{"inv",	"involved"},
	{"iota",	"ι"},
	{"irr",	"irregular"},
	{"is",	"is"},
	{"it",	"it"},
	{"kappa",	"κ"},
	{"l",	"little, long"},
	{"lC",	"little compressed"},
	{"lE",	"little extended"},
	{"lambda",	"λ"},
	{"larger",	"larger"},
	{"last",	"last"},
	{"lb",	"little brighter"},
	{"least",	"least"},
	{"like",	"like"},
	{"line",	"in a line"},
	{"little",	"little"},
	{"long",	"long"},
	{"looks",	"looks"},
	{"looped",	"looped"},
	{"m",	"magnitude"},
	{"mE",	"much extended"},
	{"mag",	"mag"},
	{"makes",	"makes"},
	{"many",	"many"},
	{"mb",	"much brighter"},
	{"more",	"more"},
	{"mottled",	"mottled"},
	{"mu",	"μ"},
	{"mult",	"multiple"},
	{"n",	"north"},
	{"narrow",	"narrow"},
	{"near",	"near"},
	{"nearly",	"nearly"},
	{"neb",	"nebula"},
	{"nebs",	"nebulous"},
	{"nebula",	"nebula"},
	{"nebulosity",	"nebulosity"},
	{"nebulous",	"nebulous"},
	{"neby",	"nebulosity"},
	{"nf",	"north following"},
	{"no",	"no"},
	{"nonexistent",	"nonexistent"},
	{"not",	"not"},
	{"np",	"north preceding"},
	{"nr",	"near"},
	{"ns",	"north-south"},
	{"nu",	"ν"},
	{"omega",	"ω"},
	{"p",	"preceding"},
	{"pB",	"pretty bright"},
	{"pC",	"pretty compressed"},
	{"pF",	"pretty faint"},
	{"pL",	"pretty large"},
	{"pR",	"pretty round"},
	{"pS",	"pretty small"},
	{"parallel",	"parallel"},
	{"part",	"part"},
	{"partly",	"partly"},
	{"patch",	"patch"},
	{"patches",	"patches"},
	{"perhaps",	"perhaps"},
	{"perpendicular",	"perpendicular"},
	{"pf",	"preceding-following"},
	{"pg",	"pretty gradually"},
	{"photosphere",	"photosphere"},
	{"pi",	"π"},
	{"place",	"place"},
	{"plate",	"plate"},
	{"plan",	"planetary nebula"},
	{"pointed",	"pointed"},
	{"portion",	"portion"},
	{"pos",	"position angle"},
	{"possibly",	"possibly"},
	{"prob",	"probably"},
	{"probably",	"probably"},
	{"ps",	"pretty suddenly"},
	{"r",	"mottled"},
	{"requires",	"requires"},
	{"resolved",	"resolved"},
	{"rho",	"ρ"},
	{"ring",	"ring"},
	{"rough",	"rough"},
	{"rr",	"some stars seen"},
	{"rrr",	"clearly consisting of stars"},
	{"ruby",	"ruby"},
	{"s",	"south"},
	{"same",	"same"},
	{"sb",	"suddenly brighter"},
	{"sc",	"scattered"},
	{"second",	"second"},
	{"seems",	"seems"},
	{"seen",	"seen"},
	{"segment",	"segment"},
	{"semi",	"semi"},
	{"sev",	"several"},
	{"several",	"several"},
	{"sf",	"south following"},
	{"shape",	"shape"},
	{"shaped",	"shaped"},
	{"sharp",	"sharp"},
	{"sigma",	"σ"},
	{"sl",	"suddenly a little"},
	{"slightly",	"slightly"},
	{"small",	"small"},
	{"south",	"south"},
	{"sp",	"south preceding"},
	{"spectrum",	"spectrum"},
	{"spindle",	"spindle"},
	{"spir",	"spiral"},
	{"spiral",	"spiral"},
	{"st 9...",	"stars of mag. 9 and fainter"},
	{"st 9...13",	"stars of mag. 9 to 13"},
	{"st",	"stars"},
	{"stell",	"stellar, pointlike"},
	{"stellar",	"stellar"},
	{"straight",	"straight"},
	{"streak",	"streak"},
	{"strongly",	"strongly"},
	{"surrounded",	"surrounded"},
	{"surrounds",	"surrounds"},
	{"susp",	"suspected"},
	{"suspected",	"suspected"},
	{"tau",	"τ"},
	{"theta",	"θ"},
	{"trap",	"trapezium"},
	{"trapez",	"trapezium"},
	{"trapezium",	"trapezium"},
	{"triN",	"trinuclear"},
	{"v",	"very"},
	{"var",	"variable"},
	{"variable",	"variable"},
	{"verification",	"verification"},
	{"verified",	"verified"},
	{"very",	"very"},
	{"vl",	"very little"},
	{"vm",	"very much"},
	{"vs",	"very suddenly"},
	{"vv",	"very very"},
	{"zeta",	"ζ"},
	{0,	0},
};

/*&
	{"ST9",	"stars from the 9th magnitude downward"},
	{"ST9...13",	"stars from 9th to 13th magnitude"},
	{"()",	"items questioned by Dreyer enclosed in parentheses"},
	*10	star of 10th mag
	{"*",	"a star (or stars)"},
	{"**",	"double star"},
	{"***",	"triple star"},
*/
