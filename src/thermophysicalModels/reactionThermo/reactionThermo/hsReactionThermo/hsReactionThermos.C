/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011-2012 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "makeHsReactionThermo.H"

#include "hsReactionThermo.H"
#include "hsRhoMixtureThermo.H"

#include "perfectGas.H"

#include "hConstThermo.H"
#include "janafThermo.H"
#include "specieThermo.H"

#include "constTransport.H"
#include "sutherlandTransport.H"

#include "homogeneousMixture.H"
#include "inhomogeneousMixture.H"
#include "veryInhomogeneousMixture.H"
#include "dieselMixture.H"
#include "multiComponentMixture.H"
#include "reactingMixture.H"
#include "singleStepReactingMixture.H"

#include "thermoPhysicsTypes.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

makeHsReactionThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    homogeneousMixture,
    constTransport,
    hConstThermo,
    perfectGas
);

makeHsReactionThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    inhomogeneousMixture,
    constTransport,
    hConstThermo,
    perfectGas
);

makeHsReactionThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    veryInhomogeneousMixture,
    constTransport,
    hConstThermo,
    perfectGas
);

makeHsReactionThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    homogeneousMixture,
    sutherlandTransport,
    janafThermo,
    perfectGas
);

makeHsReactionThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    inhomogeneousMixture,
    sutherlandTransport,
    janafThermo,
    perfectGas
);

makeHsReactionThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    veryInhomogeneousMixture,
    sutherlandTransport,
    janafThermo,
    perfectGas
);


makeHsReactionThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    dieselMixture,
    sutherlandTransport,
    janafThermo,
    perfectGas
);


// Multi-component thermo

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    multiComponentMixture,
    constGasThermoPhysics
);

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    multiComponentMixture,
    icoPoly8ThermoPhysics
);

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    multiComponentMixture,
    gasThermoPhysics
);


// Multi-component reaction thermo

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    reactingMixture,
    constGasThermoPhysics
);

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    reactingMixture,
    constIsobaricGasThermoPhysics
);

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    reactingMixture,
    icoPoly8ThermoPhysics
);

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    reactingMixture,
    gasThermoPhysics
);

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    reactingMixture,
    isobaricGasThermoPhysics
);

makeHsReactionMixtureThermo
(
    hsReactionThermo,
    hsRhoMixtureThermo,
    singleStepReactingMixture,
    gasThermoPhysics
);


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //
